#pragma once
#include <QSettings>
#include <QVariant>

static QString SKIN_KEY = "skinid";
static QString LANGS_KEY = "langs";
static QString AUTOWARP_KEY = "warp";
static QString INDENT_KEY = "indent";
static QString SHOWSPACE_KEY = "blank";
static QString MAX_BIG_TEXT = "maxtsize";
static QString SOFT_STATUS = "rstatus";
static QString SOFT_KEY = "rkey";
static QString RESTORE_CLOSE_FILE = "restore"; //�ָ��ر�ʱ�򿪵��ļ�
static QString PRO_DIR = "prodir";//���������ļ���·��
//static QString RESTORE_SIZE = "rsize";//����ر�ʱ�Ĵ�С
static QString WIN_POS = "pos";//����ر��ǵĴ�С
static QString ICON_SIZE = "iconsize";//ͼ���С
static QString ZOOMVALUE = "zoom"; //�Ŵ���
static QString VERSION = "version";//��ǰ�汾
static QString FINDRESULTPOS = "findpos";//���Ҵ���������λ��
static QString FILELISTPOS = "filepos";//�ļ��б��������λ��
static QString FILELISTSHOW = "showfilelist"; //�ļ��б���Ƿ���ʾ
static QString TOOLBARSHOW = "showbar"; //�Ƿ���ʾ������
static QString FINDWINSIZE = "findwinsize";//������ҿ�Ĵ�С��150%�Ŵ�ʱ�������á���������ÿ���ֶ�����
static QString SHOWWEBADDR = "showweb";//����web��ַ��˫����ҳ��
static QString FIND_RESULT_FONT_SIZE = "frfs";//���ҽ����Ĭ�������С��Ĭ��Ϊ14


//���������winpos.ini�е�key�����ⵥ���ļ�̫�����������ٶ�
static QString BATCH_FIND_REPLACE_POS = "bfpos";//���������滻���ڵĴ�С

class NddSetting
{
public:
	static bool checkNoExistAdd(QString key, QVariant & value);

	static void init();

	static QString getKeyValueFromSets(QString key);

	static bool updataKeyValueFromSets(QString key, QString  value);

	static QByteArray getKeyByteArrayValue(QString key);

	static void updataKeyByteArrayValue(QString key, QByteArray & value);

	static void addKeyValueToSets(QString  key, QString  value);

	static int getKeyValueFromNumSets(const QString key);

	static bool updataKeyValueFromNumSets(const QString key, int value);

	static void addKeyValueToNumSets(QString key, int value);

	static void close();

	static QByteArray getWinPos(QString key);

	static void updataWinPos(QString key, QByteArray& value);

	

	static bool isDbExist()
	{
		return s_isExistDb;
	}
private:
	static void winPosInit();
private:

	static bool s_isExistDb;
	static bool s_isContentChanged;
	static int s_reference;

	static QSettings* s_nddSet;

	static QSettings* s_winPosSet;
};
