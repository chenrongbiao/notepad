#include "nddsetting.h"
#include <QObject>
#include <QtDebug>
#include <QCoreApplication>
#include <QDate>
#include <QFile>
#include <QStorageInfo>
#include <QSettings>

static short version_num = 29; //1.22.0 ��29
//�����ļ��Ƿ���ڡ������ʼ��ʧ�ܣ��򲻴���
bool NddSetting::s_isExistDb = false;
int NddSetting::s_reference = 0;
bool NddSetting::s_isContentChanged = false;

QSettings* NddSetting::s_nddSet = nullptr;

QSettings* NddSetting::s_winPosSet = nullptr;

//���key�����ڣ�������key-value�����ڣ�����true
bool NddSetting::checkNoExistAdd(QString key, QVariant& value)
{
	//ÿ���¼��ֶκ�����Ҫ���һ�£�������������
	if (!s_nddSet->contains(key))
	{
		s_nddSet->setValue(key, value);

		if (!s_isContentChanged)
		{
			s_isContentChanged = true;
		}
		return false;
	}
	return true;
}

//20220402����������һ��ǰ�����������ݿ����������̴߳����ģ���ò�Ҫ�����߳��е��á�
//������Ϊ���̷߳��ʺͶ��̳߳�ͻ�����������������⡣������������ļ��Ķ�д�������߳��н���
void NddSetting::init()
{
	++s_reference;

	//����Ѿ���ʼ�����ˣ���ֱ�ӷ���
	if (s_isExistDb)
	{
		return;
	}
	QString settingDir = QString("notepad/nddsets");
	QSettings qs(QSettings::IniFormat, QSettings::UserScope, settingDir);
	QString qsSetPath = qs.fileName();

	s_nddSet = new QSettings(QSettings::IniFormat, QSettings::UserScope, settingDir);
	s_nddSet->setIniCodec("UTF-8");
	bool initOk = true;

	auto initNddSet = []() {
		QString key = "signdate";
		//QString date = QDate::currentDate().toString(QString("yyyy/M/d"));
		//��д�����ʱ�䣬�����һ�����У����������ᷢ��������
		//ֱ��дһ����ȥ��ʱ�䣬�õ�һ�����У�����Ҫǩ��
		addKeyValueToSets(key, "2022/2/20");

		QString str;

		//tab�ĳ��ȣ�Ĭ��Ϊ4
		addKeyValueToNumSets("tablens", 4);
		//space replace tab�ո��滻tab��Ĭ��0, 1Ϊtrue,0Ϊfalse
		addKeyValueToNumSets("tabnouse", 0);

		addKeyValueToSets("mac", "0");
		addKeyValueToNumSets("padtimes", 0);
		addKeyValueToNumSets("serverip", 0);

		//�Ƿ������ͬ������
		addKeyValueToNumSets("hexhigh", 1);

		addKeyValueToNumSets(VERSION, version_num);

		//Ƥ��id
        addKeyValueToNumSets(SKIN_KEY, 0);

		//����index 0:�Զ�ѡ�� 1:���� 2 Ӣ��
		addKeyValueToNumSets(LANGS_KEY, 0);

		//�����Զ�����
		addKeyValueToNumSets(AUTOWARP_KEY, 0);

		//�����Զ�����
		addKeyValueToNumSets(INDENT_KEY, 0);

		//��ʾ�հ�
		addKeyValueToNumSets(SHOWSPACE_KEY, 0);

		//����ı��ļ������ޡ�Ĭ��100M.(50-300)
		addKeyValueToNumSets(MAX_BIG_TEXT, 100);

		addKeyValueToSets(SOFT_KEY, "0");

		addKeyValueToSets(RESTORE_CLOSE_FILE, "1");

		//0 24 1 36 2 48
		addKeyValueToNumSets(ICON_SIZE, 1);

		addKeyValueToNumSets(ZOOMVALUE, 100);
	
		addKeyValueToNumSets(FINDRESULTPOS, Qt::BottomDockWidgetArea);

		addKeyValueToNumSets(FILELISTPOS, Qt::LeftDockWidgetArea);

		//Ĭ��0����ʾ
		addKeyValueToNumSets(FILELISTSHOW, 0);

		//Ĭ����ʾ������
		addKeyValueToNumSets(TOOLBARSHOW, 1);

		//����ҳ��Ĭ�ϲ���ѡ����Դ�ķѶ�
		addKeyValueToNumSets(SHOWWEBADDR, 0);

		//���ҽ�����Ĭ�������С
		addKeyValueToNumSets(FIND_RESULT_FONT_SIZE, 14);
	};

	if (!s_nddSet->contains(VERSION))
	{
		//�������߳�ʼ������
		initNddSet();
		s_isContentChanged = true;
	}
	else
	{
		do {
			{
				QVariant v(VERSION);
				if (checkNoExistAdd(VERSION, v))
				{
					//������ڣ����Ұ汾������,����Ҫ�ߺ����Զ����������
					int curVersion = s_nddSet->value(VERSION).toInt();
					if (curVersion == version_num)
					{
						break;
					}
					else if (curVersion < version_num)
					{
						//���°汾������
						updataKeyValueFromNumSets(VERSION, version_num);
					}
				}
			}
			//ÿ���¼��ֶκ�����Ҫ���һ�£�������������
			{
				QVariant v(1);
				checkNoExistAdd(SKIN_KEY, v);
			}

			{
				QVariant langs(0);
				checkNoExistAdd(LANGS_KEY, langs);
			}

			{
				QVariant v(0);
				checkNoExistAdd(AUTOWARP_KEY, v);
			}

			{
				QVariant v(0);
				checkNoExistAdd(INDENT_KEY, v);
			}

			{
				QVariant v(0);
				checkNoExistAdd(SHOWSPACE_KEY, v);
			}

			
			{
				QVariant v(100);
				checkNoExistAdd(MAX_BIG_TEXT, v);
			}

			{
				QVariant v(0);
				checkNoExistAdd(SOFT_STATUS, v);
			}

			{
				QVariant v("0");
				checkNoExistAdd(SOFT_KEY, v);
			}

			{
				QVariant v(1);
				checkNoExistAdd(RESTORE_CLOSE_FILE, v);
			}

			{
				QVariant v(1);
				checkNoExistAdd(ICON_SIZE, v);
			}

			{
				QVariant v(100);
				checkNoExistAdd(ZOOMVALUE, v);
			}
			{
				QVariant v(Qt::BottomDockWidgetArea);
				checkNoExistAdd(FINDRESULTPOS, v);
			}

			{
				QVariant v(Qt::LeftDockWidgetArea);
				checkNoExistAdd(FILELISTPOS, v);
			}
			{
				QVariant v(0);
				checkNoExistAdd(FILELISTSHOW, v);
			}
			{
				QVariant v(1);
				checkNoExistAdd(TOOLBARSHOW, v);
			}
			{
				QVariant v(0);
				checkNoExistAdd(SHOWWEBADDR, v);
			}
			{
				QVariant v(14);
				checkNoExistAdd(FIND_RESULT_FONT_SIZE, v);
			}
		} while (false);

	}

	s_isExistDb = initOk;

}



//дһ���ܵĻ�ȡ���õĽӿڣ������Ժ�ÿ���ֶζ���Ҫдһ����д�ӿ�
QString NddSetting::getKeyValueFromSets(QString key)
{
	return s_nddSet->value(key,"").toString();
}

bool NddSetting::updataKeyValueFromSets(QString key, QString value)
{
	s_nddSet->setValue(key,value);
	s_isContentChanged = true;
	return true;
}

//дһ���ܵĻ�ȡ���õĽӿڣ������Ժ�ÿ���ֶζ���Ҫдһ����д�ӿ�
QByteArray NddSetting::getKeyByteArrayValue(QString key)
{
	return s_nddSet->value(key, "").toByteArray();
}

void NddSetting::updataKeyByteArrayValue(QString key, QByteArray& value)
{
	s_nddSet->setValue(key, QVariant(value));
	s_isContentChanged = true;
}

//��һ�μ�һ����¼�����ڳ�ʼ��
void NddSetting::addKeyValueToSets(QString key, QString value)
{
	s_nddSet->setValue(key, QVariant(value));
}


//дһ���ܵĻ�ȡ���õĽӿڣ������Ժ�ÿ���ֶζ���Ҫдһ����д�ӿ�.0��Ĭ��ֵ���ⲿ��ò���0����ʼ��ֵ
int NddSetting::getKeyValueFromNumSets(const QString key)
{
	QVariant v = s_nddSet->value(key, QVariant(0));
	return v.toInt();
}

bool NddSetting::updataKeyValueFromNumSets(const QString key, int value)
{
	s_nddSet->setValue(key, QVariant(value));
	return true;
}


//��һ�μ�һ����¼�����ڳ�ʼ��
void NddSetting::addKeyValueToNumSets(QString key, int value)
{
	s_nddSet->setValue(key, QVariant(value));
}


void NddSetting::close()
{
	if (s_reference > 0)
	{
		--s_reference;

		if (s_reference == 0)
		{
			s_isExistDb = false;

			//��һ�������ı���
			if (s_isContentChanged)
			{
				s_nddSet->sync();
				delete s_nddSet;
				s_nddSet = nullptr;
				s_isContentChanged = false;	
			}

			//�����ﱣ��һ���Ӵ��ڵ�λ�á����ų��п����Ӵ��ڻ��ڣ��������Ѿ��˳���������������ⲻ��
			if (s_winPosSet != nullptr)
			{
				s_winPosSet->sync();
				s_winPosSet = nullptr;
		}
	}
}
}

//�Ӵ��ڵ�λ�ã���������һ��winpos.ini�ļ��У�������������ʱ������Ҫ��ȡ���ɱ�������ʱ�����ٶ�
QByteArray NddSetting::getWinPos(QString key)
{
	winPosInit();
	return s_winPosSet->value(key, "").toByteArray();
}

void NddSetting::updataWinPos(QString key, QByteArray& value)
{
	winPosInit();
	s_winPosSet->setValue(key, QVariant(value));
}

void NddSetting::winPosInit()
{
	if (s_winPosSet == nullptr)
	{
		QString settingDir = QString("notepad/delayset");
		QSettings qs(QSettings::IniFormat, QSettings::UserScope, settingDir);
		QString qsSetPath = qs.fileName();

		s_winPosSet = new QSettings(QSettings::IniFormat, QSettings::UserScope, settingDir);
		s_winPosSet->setIniCodec("UTF-8");
	}
}
