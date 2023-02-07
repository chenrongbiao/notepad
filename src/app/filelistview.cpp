#include "filelistview.h"
#include "rcglobal.h"
#include "ccnotepad.h"
#include <QListWidgetItem>
#include <QMenu>


//����ʾ�ļ������Ժ󣬰������ļ����ڸ��б���

FileListView::FileListView(QWidget *parent)
	: QWidget(parent), m_pNotepad(nullptr)
{
	ui.setupUi(this);

	connect(ui.filelistWidget, &QListWidget::itemDoubleClicked, this, &FileListView::itemDoubleClicked);

	setContextMenuPolicy(Qt::CustomContextMenu);  //����ö��ֵ

	connect(this, &QListWidget::customContextMenuRequested, this, &FileListView::slot_ShowPopMenu);
}

FileListView::~FileListView()
{
	m_fileEditMap.clear();
}

void FileListView::setNotepadWin(QWidget* pNotepad)
{
	m_pNotepad = pNotepad;
}

//�Ҽ��˵�
void FileListView::slot_ShowPopMenu(const QPoint& pos)
{
	QListWidgetItem* curItem = ui.filelistWidget->itemAt(pos);
	if (curItem != nullptr)
	{
		QMenu* menu = new QMenu(this);

		QAction* actionAdd = menu->addAction(tr("Show File in Explorer"), this, [&]() {
			showFileInExplorer(curItem->text());
		});

		menu->addAction(tr("Close File"), this, [&]() {

			QString filePath = curItem->text();

			if (m_fileEditMap.contains(filePath))
			{
				CCNotePad* pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);

				if (m_pNotepad != nullptr)
				{
					pNotePad->closeFileByEditWidget(m_fileEditMap.value(curItem->text()).pEditWidget);
				}
				//ע�����ﲻ��Ҫ��ɾ��m_fileEditMapԪ�أ���ΪcloseFileByEditWidget�������á�
			}
		});

		//û�����Ʊ�ʾ�Ƕ����item�������ڶ�Ӧ���ļ���ֻ��ռλ
		if (curItem->text().isEmpty())
		{
			actionAdd->setEnabled(false);
		}

		if (menu)
		{
			menu->setAttribute(Qt::WA_DeleteOnClose);
			menu->exec(QCursor::pos());
		}
	}
}

void FileListView::delFileItem(QString & filePath)
{
	if (m_fileEditMap.contains(filePath))
	{
		m_fileEditMap.remove(filePath);
		QList<QListWidgetItem*> items = ui.filelistWidget->findItems(filePath, Qt::MatchFixedString);

		if (!items.isEmpty())
		{
			delete items.at(0);
		}

	}
}

QWidget* FileListView::getWidgetByFilePath(QString filePath)
{
	if (m_fileEditMap.contains(filePath))
	{
		return m_fileEditMap.value(filePath).pEditWidget;
	}
	return nullptr;
}

void FileListView::setCurItem(QString filePath)
{
	if (m_fileEditMap.contains(filePath))
	{
		ui.filelistWidget->setCurrentItem(m_fileEditMap.value(filePath).pListItem);
	}
}

void FileListView::addFileItem(QString& filePath, QWidget* edit)
{
	if (!m_fileEditMap.contains(filePath))
	{
		QListWidgetItem* newItem = new QListWidgetItem(filePath);
		ui.filelistWidget->addItem(newItem);

		m_fileEditMap.insert(filePath, FileListItemData(edit, newItem));
	}
}

