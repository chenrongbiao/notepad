#include "scintillahexeditview.h"
#include "styleset.h"

#include "ccnotepad.h"
#include <stdexcept>
#include <QMimeData>
#include <QScrollBar>

// initialize the static variable
bool ScintillaHexEditView::_SciInit = false;
#define DEFAULT_FONT_NAME "Courier New"

const int col_hex_start = 9;
const int col_hex_finish = 56;
const int col_text_start = 57;
const int col_text_finish = 72;
const int col_num = 75;

ScintillaHexEditView::ScintillaHexEditView(QWidget *parent):QsciScintilla(parent), m_NoteWin(nullptr)
{
	init();
}

ScintillaHexEditView::~ScintillaHexEditView()
{
}

void ScintillaHexEditView::setNoteWidget(QWidget * win)
{
	CCNotePad* pv = dynamic_cast<CCNotePad*>(win);
	if (pv != nullptr)
	{
		m_NoteWin = pv;
}
}

sptr_t ScintillaHexEditView::execute(quint32 Msg, uptr_t wParam, sptr_t lParam) const {
	try {
		return (m_pScintillaFunc) ? m_pScintillaFunc(m_pScintillaPtr, Msg, wParam, lParam) : -1;
	}
	catch (...)
	{
		return -1;
	}
};

void ScintillaHexEditView::copy()
{
	if (property("type").toInt() == HEX_TYPE && !selecting)
	{
		char *hex;
		int hexi;

		if (m_CopyFrom == m_CopyTo)
			return;

		hexi = 0;

		if (m_CopyTo > m_CopyFrom)
		{
			hex = new char[m_CopyTo - m_CopyFrom + 1];
			for (int i = m_CopyFrom; i < m_CopyTo; i += 3)
			{
				if (m_PosSelect[i] > 0)
				{
					hex[hexi++] = execute(SCI_GETCHARAT, i);
					hex[hexi++] = execute(SCI_GETCHARAT, i + 1);
					hex[hexi++] = ' ';
				}
			}
		}
		else
		{
			hex = new char[m_CopyFrom - m_CopyTo + 1];
			for (int i = m_CopyTo; i < m_CopyFrom; i += 3)
			{
				if (m_PosSelect[i + 1] > 0)
				{
					hex[hexi++] = execute(SCI_GETCHARAT, i + 1);
					hex[hexi++] = execute(SCI_GETCHARAT, i + 2);
					hex[hexi++] = ' ';
				}
			}
		}
		
		hex[hexi] = 0;
		execute(SCI_COPYTEXT, hexi, reinterpret_cast<sptr_t>(hex));
		delete []hex;

		return;
	}
	QsciScintilla::copy();
}

void ScintillaHexEditView::selectAll(bool select)
{
	if (property("type").toInt() == HEX_TYPE && !selecting)
	{
		int count;

		count = execute(SCI_GETLENGTH);
		
		m_PosFrom = 0; m_PosLast = 0; m_PosTo = count - 1;

		execute(SCI_CLEARSELECTIONS);

		fill(m_PosSelect.begin(), m_PosSelect.end(), 0);

		selectAdditional();

		m_CopyFrom = col_hex_start;
		//m_CopyTo = count - (col_num - col_hex_finish) - 1;
	}
}

void ScintillaHexEditView::init()
{
	if (!_SciInit)
	{
		_SciInit = true;
	}

	m_pScintillaFunc = (SCINTILLA_FUNC)this->SendScintillaPtrResult(SCI_GETDIRECTFUNCTION);
	m_pScintillaPtr = (SCINTILLA_PTR)this->SendScintillaPtrResult(SCI_GETDIRECTPOINTER);


	if (!m_pScintillaFunc)
	{
		throw std::runtime_error("ScintillaEditView::init : SCI_GETDIRECTFUNCTION message failed");
	}

	if (!m_pScintillaPtr)
	{
		throw std::runtime_error("ScintillaEditView::init : SCI_GETDIRECTPOINTER message failed");
	}


	//设置字体
#if defined (Q_OS_MAC)
    QFont font(DEFAULT_FONT_NAME, 12, QFont::Normal);
#else
	QFont font(DEFAULT_FONT_NAME, 11, QFont::Normal);
#endif
	setFont(font);
	setMarginsFont(font);
	execute(SCI_SETTABWIDTH, 4);

	updateThemes();

	connect(this->verticalScrollBar(), &QScrollBar::valueChanged, this, &ScintillaHexEditView::slot_scrollYValueChange);

}

void ScintillaHexEditView::selectAdditional()
{
	int rf, cf;
	int r1, c1, r2, c2;
	int begin, end;
	bool inverse;
	bool adding;
	int sel_num;

	if (m_PosTo == m_PosLast)
		goto check_status_out;

	lineIndexFromPosition(m_PosFrom, &rf, &cf);

	//确定方向和起止
	if (m_PosTo >= m_PosFrom)
	{
		inverse = false;
		if (m_PosLast < m_PosFrom)
		{
			adding = true;
			execute(SCI_CLEARSELECTIONS);
			fill(m_PosSelect.begin(), m_PosSelect.end(), 0);
			m_CopyTo = m_CopyFrom;
			lineIndexFromPosition(m_PosFrom, &r1, &c1);
		}
		else
		{
			lineIndexFromPosition(m_PosLast, &r1, &c1);
			if (m_PosTo > m_PosLast)
			{
				adding = true;
			}
			else
			{
				adding = false;
			}
		}
	}
	else
	{
		inverse = true;
		if (m_PosLast > m_PosFrom)
		{
			adding = true;
			execute(SCI_CLEARSELECTIONS);
			fill(m_PosSelect.begin(), m_PosSelect.end(), 0);
			m_CopyTo = m_CopyFrom;
			lineIndexFromPosition(m_PosFrom, &r1, &c1);
		}
		else
		{
			lineIndexFromPosition(m_PosLast, &r1, &c1);
			if (m_PosTo < m_PosLast)
			{
				adding = true;
			}
			else
			{
				adding = false;
			}
		}
	}

	lineIndexFromPosition(m_PosTo, &r2, &c2);

	if (rf < 0 || cf < 0 || r1 < 0 || c1 < 0 || r2 < 0 || c2 < 0)
		goto check_status_out;

	if (cf < col_text_start || cf > col_text_finish)
	{
		//选择二进制区域，正反向，加或减
		if (inverse == false)
		{
			if (adding == true)
			{
				for (int i = r1; i <= r2; ++i)
				{
					//每行hex显示区域
					if (i == r1)
					{
						if (c1 < col_hex_start)
							begin = col_hex_start;
						else if (c1 > col_hex_finish)
							begin = col_hex_finish + 1;
						else begin = c1 / 3 * 3;
					}
					else
						begin = col_hex_start;

					if (i == r2)
					{
						if (c2 < col_hex_start)
							end = col_hex_start - 1;
						else if (c2 > col_hex_finish)
							end = col_hex_finish;
						else end = c2 / 3 * 3 + 2;
					}
					else
						end = col_hex_finish;


					for (int j = begin; j <= end; j += 3)
					{
						if (m_PosSelect[i * col_num + j] == 0)
						{
							execute(SCI_ADDSELECTION, i * col_num + j, i * col_num + j + 2);
							execute(SCI_ADDSELECTION, i * col_num + col_text_start + (j - col_hex_start) / 3,
								i * col_num + col_text_start + (j - col_hex_start) / 3 + 1);
							m_PosSelect[i * col_num + j] = 1;
							m_CopyTo = i * col_num + j + 1;
						}
					}
				}
			}
			else
			{
				for (int i = r1; i >= r2; --i)
				{
					//每行hex显示区域
					if (i == r1)
					{
						if (c1 < col_hex_start)
							begin = col_hex_start - 1;
						else if (c1 > col_hex_finish)
							begin = col_hex_finish;
						else begin = c1 / 3 * 3 + 2;
					}
					else
						begin = col_hex_finish;

					if (i == r2)
					{
						if (c2 < col_hex_start)
							end = col_hex_start - 1;
						else if (c2 > col_hex_finish)
							end = col_hex_finish + 1;
						else end = c2 / 3 * 3 + 2;
					}
					else
						end = col_hex_start;


					for (int j = begin; j > end; j -= 3)
					{
						if (m_PosSelect[i * col_num + j - 2] > 0)
						{
							execute(SCI_DROPSELECTIONN, execute(SCI_GETSELECTIONS) - 1);
							execute(SCI_DROPSELECTIONN, execute(SCI_GETSELECTIONS) - 1);
							m_PosSelect[i * col_num + j - 2] = 0;
							m_CopyTo = i * col_num + j - 4;
						}
					}
				}
			}
		}
		else
		{
			if (adding == true)
			{
				for (int i = r1; i >= r2; --i)
				{
					//每行hex显示区域
					if (i == r1)
					{
						if (c1 < col_hex_start)
							begin = col_hex_start - 1;
						else if (c1 > col_hex_finish)
							begin = col_hex_finish;
						else begin = c1 / 3 * 3 + 2;
					}
					else
						begin = col_hex_finish;

					if (i == r2)
					{
						if (c2 < col_hex_start)
							end = col_hex_start;
						else if (c2 > col_hex_finish)
							end = col_hex_finish + 1;
						else end = c2 / 3 * 3;
					}
					else
						end = col_hex_start;


					for (int j = begin; j >= end; j -= 3)
					{
						if (m_PosSelect[i * col_num + j - 2] == 0)
						{
							execute(SCI_ADDSELECTION, i * col_num + j - 2, i * col_num + j);
							execute(SCI_ADDSELECTION, i * col_num + col_text_start + (j - 2 - col_hex_start) / 3,
								i * col_num + col_text_start + (j - 2 - col_hex_start) / 3 + 1);
							m_PosSelect[i * col_num + j - 2] = 1;
							m_CopyTo = i * col_num + j - 3;
						}
					}
				}
			}
			else
			{
				for (int i = r1; i <= r2; ++i)
				{
					//每行hex显示区域
					if (i == r1)
					{
						if (c1 < col_hex_start)
							begin = col_hex_start;
						else if (c1 > col_hex_finish)
							begin = col_hex_finish + 1;
						else begin = c1 / 3 * 3;
					}
					else
						begin = col_hex_start;

					if (i == r2)
					{
						if (c2 < col_hex_start)
							end = col_hex_start - 1;
						else if (c2 > col_hex_finish)
							end = col_hex_finish + 1;
						else end = c2 / 3 * 3;
					}
					else
						end = col_hex_finish;


					for (int j = begin; j < end; j += 3)
					{
						if (m_PosSelect[i * col_num + j] > 0)
						{
							execute(SCI_DROPSELECTIONN, execute(SCI_GETSELECTIONS) - 1);
							execute(SCI_DROPSELECTIONN, execute(SCI_GETSELECTIONS) - 1);
							m_PosSelect[i * col_num + j] = 0;
							m_CopyTo = i * col_num + j - 1;
						}
					}
				}
			}
		}
	}
	else
	{
		//选择字符区域
		if (inverse == false)
		{
			if (adding == true)
			{
				for (int i = r1; i <= r2; ++i)
				{
					//每行字符显示区域
					if (i == r1)
					{
						if (c1 < col_text_start)
							begin = col_text_start;
						else if (c1 > col_text_finish)
							begin = col_text_finish + 1;
						else begin = c1;
					}
					else
						begin = col_text_start;

					if (i == r2)
					{
						if (c2 < col_text_start)
							end = col_text_start - 1;
						else if (c2 > col_text_finish)
							end = col_text_finish;
						else end = c2;
					}
					else
						end = col_text_finish;


					for (int j = begin; j <= end; ++j)
					{
						if (m_PosSelect[i * col_num + col_hex_start + (j - col_text_start) * 3] == 0)
						{
							execute(SCI_ADDSELECTION, i * col_num + col_hex_start + (j - col_text_start) * 3,
								i * col_num + col_hex_start + (j - col_text_start) * 3 + 2);
							execute(SCI_ADDSELECTION, i * col_num + j, i * col_num + j + 1);
							m_PosSelect[i * col_num + col_hex_start + (j - col_text_start) * 3] = 1;
							m_CopyTo = i * col_num + col_hex_start + (j - col_text_start) * 3 + 1;
						}
					}
				}
			}
			else
			{
				for (int i = r1; i >= r2; --i)
				{
					//每行字符显示区域
					if (i == r1)
					{
						if (c1 < col_text_start)
							begin = col_text_start - 1;
						else if (c1 > col_text_finish)
							begin = col_text_finish;
						else begin = c1;
					}
					else
						begin = col_text_finish;

					if (i == r2)
					{
						if (c2 < col_text_start)
							end = col_text_start - 1;
						else if (c2 > col_text_finish)
							end = col_text_finish + 1;
						else end = c2;
					}
					else
						end = col_text_start;


					for (int j = begin; j > end; --j)
					{
						if (m_PosSelect[i * col_num + col_hex_start + (j - col_text_start) * 3] == 1)
						{
							execute(SCI_DROPSELECTIONN, execute(SCI_GETSELECTIONS) - 1);
							execute(SCI_DROPSELECTIONN, execute(SCI_GETSELECTIONS) - 1);
							m_PosSelect[i * col_num + col_hex_start + (j - col_text_start) * 3] = 0;
							m_CopyTo = i * col_num + col_hex_start + (j - col_text_start) * 3 - 2;
						}
					}
				}
			}
		}
		else
		{
			if (adding == true)
			{
				for (int i = r1; i >= r2; --i)
				{
					//每行字符显示区域
					if (i == r1)
					{
						if (c1 < col_text_start)
							begin = col_text_start - 1;
						else if (c1 > col_text_finish)
							begin = col_text_finish;
						else begin = c1;
					}
					else
						begin = col_text_finish;

					if (i == r2)
					{
						if (c2 < col_text_start)
							end = col_text_start;
						else if (c2 > col_text_finish)
							end = col_text_finish + 1;
						else end = c2;
					}
					else
						end = col_text_start;


					for (int j = begin; j >= end; --j)
					{
						if (m_PosSelect[i * col_num + col_hex_start + (j - col_text_start) * 3] == 0)
						{
							execute(SCI_ADDSELECTION, i * col_num + col_hex_start + (j - col_text_start) * 3,
								i * col_num + col_hex_start + (j - col_text_start) * 3 + 2);
							execute(SCI_ADDSELECTION, i * col_num + j, i * col_num + j + 1);
							m_PosSelect[i * col_num + col_hex_start + (j - col_text_start) * 3] = 1;
							m_CopyTo = i * col_num + col_hex_start + (j - col_text_start) * 3 - 1;
						}
					}
				}
			}
			else
			{
				for (int i = r1; i <= r2; ++i)
				{
					//每行字符显示区域
					if (i == r1)
					{
						if (c1 < col_text_start)
							begin = col_text_start;
						else if (c1 > col_text_finish)
							begin = col_text_finish + 1;
						else begin = c1;
					}
					else
						begin = col_text_start;

					if (i == r2)
					{
						if (c2 < col_text_start)
							end = col_text_start - 1;
						else if (c2 > col_text_finish)
							end = col_text_finish + 1;
						else end = c2;
					}
					else
						end = col_text_finish;


					for (int j = begin; j < end; ++j)
					{
						if (m_PosSelect[i * col_num + col_hex_start + (j - col_text_start) * 3] == 1)
						{
							execute(SCI_DROPSELECTIONN, execute(SCI_GETSELECTIONS) - 1);
							execute(SCI_DROPSELECTIONN, execute(SCI_GETSELECTIONS) - 1);
							m_PosSelect[i * col_num + col_hex_start + (j - col_text_start) * 3] = 0;
							m_CopyTo = i * col_num + col_hex_start + (j - col_text_start) * 3 + 2;
						}
					}
				}
			}
		}
	}

check_status_out:
	m_PosLast = m_PosTo;
	emit QSCN_SELCHANGED(m_CopyFrom != m_CopyTo);

}

//Y方向滚动条值变化后的槽函数
void ScintillaHexEditView::slot_scrollYValueChange(int value)
{
	if (value >= this->verticalScrollBar()->maximum())
	{
		if (m_NoteWin != nullptr)
		{
			m_NoteWin->showChangePageTips(this);
		}
	}
	else if (value == this->verticalScrollBar()->minimum())
	{
		if (m_NoteWin != nullptr)
		{
			m_NoteWin->showChangePageTips(this);
		}
	}
}


void ScintillaHexEditView::dragEnterEvent(QDragEnterEvent* event)
{
	//if (event->mimeData()->hasFormat("text/uri-list")) //只能打开文本文件
	//{
	//	event->accept(); //可以在这个窗口部件上拖放对象
	//}
	//else
	//{
	//	event->ignore();
	//}
	event->accept();
	}

void ScintillaHexEditView::dropEvent(QDropEvent* e)
{
	QList<QUrl> urls = e->mimeData()->urls();
	if (urls.isEmpty())
		return;

	CCNotePad* pv = dynamic_cast<CCNotePad*>(m_NoteWin);
	if (pv != nullptr)
		pv->receiveEditDrop(e);

	//qDebug() << ui.leftSrc->geometry() << ui.rightSrc->geometry() << QCursor::pos() << this->mapFromGlobal(QCursor::pos());
}

void ScintillaHexEditView::focusInEvent(QFocusEvent* e)
{
	emit QSCN_SELCHANGED(m_CopyFrom != m_CopyTo);
}

void ScintillaHexEditView::mouseMoveEvent(QMouseEvent* e)
{
	if (property("type").toInt() == HEX_TYPE && selecting && e->button() != Qt::RightButton)
	{
		

		m_SelTo = Scintilla::Point::FromInts(e->x(), e->y());

		//m_PosFrom = execute(SCI_POSITIONFROMPOINT, m_SelFrom.x, m_SelFrom.y);
		m_PosTo = execute(SCI_POSITIONFROMPOINT, m_SelTo.x, m_SelTo.y);

		selectAdditional();
	
		return;
	}
	QsciScintillaBase::mouseMoveEvent(e);
}

void ScintillaHexEditView::mousePressEvent(QMouseEvent* e)
{
	if (property("type").toInt() == HEX_TYPE && !selecting && e->button() != Qt::RightButton)
	{
		int r1, c1;
		execute(SCI_CLEARSELECTIONS);
		fill(m_PosSelect.begin(), m_PosSelect.end(), 0);
		selecting = true;
		m_SelFrom = Scintilla::Point::FromInts(e->x(), e->y());
		m_SelTo = m_SelFrom;
		m_PosFrom = execute(SCI_POSITIONFROMPOINT, m_SelFrom.x, m_SelFrom.y);
		m_PosTo = m_PosFrom;
		m_PosLast = m_PosTo;
		lineIndexFromPosition(m_PosFrom, &r1, &c1);
		if (c1 < col_text_start || c1 > col_text_finish)
		{
			//选择二进制区域
			if (c1 < col_hex_start)
				c1 = col_hex_start;
			else if (c1 > col_hex_finish)
				c1 = col_hex_finish + 1;
			else c1 = c1 / 3 * 3;
		}
		else
		{
			//选择字符区域
			c1 = col_hex_start + (c1 - col_text_start) * 3;
		}
		m_CopyFrom = m_CopyTo = r1 * col_num + c1;
		emit QSCN_SELCHANGED(false);
		return;
	}
	QsciScintillaBase::mousePressEvent(e);
}

void ScintillaHexEditView::mouseReleaseEvent(QMouseEvent* e)
{
	if (property("type").toInt() == HEX_TYPE && selecting && e->button() != Qt::RightButton)
	{
		m_PosFrom = execute(SCI_POSITIONFROMPOINT, m_SelFrom.x, m_SelFrom.y);
		m_PosTo = execute(SCI_POSITIONFROMPOINT, m_SelTo.x, m_SelTo.y);
		m_PosLast = m_PosTo;
		selecting = false;
		emit QSCN_SELCHANGED(m_PosTo != m_PosFrom);
		return;
	}
	QsciScintillaBase::mouseReleaseEvent(e);
}


void ScintillaHexEditView::updateThemes()
{
	//如果是黑色主题，则单独做一些风格设置
	setColor(StyleSet::s_global_style->default_style.fgColor);
	setMarginsBackgroundColor(StyleSet::s_global_style->line_number_margin.bgColor);
	setPaper(StyleSet::s_global_style->default_style.bgColor);
}

void ScintillaHexEditView::setText(const QString& text)
{
	QsciScintilla::setText(text);
	m_PosSelect.clear();
	m_PosSelect.assign(execute(SCI_GETLENGTH), 0);
}

