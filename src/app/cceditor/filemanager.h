#pragma once

#include "common.h"
#include "rcglobal.h"

#include <QString>
#include <QObject>
#include <QList>
#include <QFile>

class ScintillaEditView;
class ScintillaHexEditView;

//С��100k���ļ�һ����ȫ����ȡ���
const int LITTLE_FILE_MAX = 1024000;

enum ERROR_TYPE {
	NONE_ERROR=-1,
	OPEN_EMPTY_FILE=0,
};

struct NewFileIdMgr {
	int index;
	ScintillaEditView* editView;

	NewFileIdMgr(int index_, ScintillaEditView* editView_):index(index_), editView(editView_)
	{

	}
};

//����������ļ�����Ϣ
struct HexFileMgr {
	QString filePath;
	QFile* file;
	qint64 fileOffset;
	qint64 fileSize;
	qint16 lineSize;//ÿ�ζ�ȡ�����У�Ĭ��Ϊ64�У�û��16���ַ�
	char* contentBuf;
	int contentRealSize;
	bool onetimeRead; //�Ƿ�һ����ȫ����ȡ���ڴ档С�ڵ���LITTLE_FILE_MAX�ĲŻ�ȫ����ȡ
	HexFileMgr() :file(nullptr), fileOffset(0), lineSize(64), fileSize(0), contentBuf(nullptr), contentRealSize(0),onetimeRead(false)
	{

	}
	void destory()
	{
		if (file != nullptr)
		{
			file->close();
			delete file;
			file = nullptr;
		}
		if (contentBuf != nullptr)
		{
			delete[]contentBuf;
			contentBuf = nullptr;
		}
	}
private:
	HexFileMgr& operator=(const HexFileMgr&) = delete;
	HexFileMgr(const HexFileMgr&) = delete;
};

//������ı��ļ�����Ϣ
struct TextFileMgr {
	QString filePath;
	QFile* file;
	qint64 fileOffset;
	qint64 fileSize;
	qint16 lineSize;//ÿ�ζ�ȡ�����У�Ĭ��ÿ�ζ�ȡ1024�С�������󲻳���1M�����ݡ�
	char* contentBuf;
	int contentRealSize;
	int loadWithCode;
	int lineEndType;//��β���ͣ�win linux mac
	
	TextFileMgr() :file(nullptr), fileOffset(0), lineSize(64), fileSize(0), contentBuf(nullptr), contentRealSize(0), loadWithCode(CODE_ID::UNKOWN),lineEndType(RC_LINE_FORM::UNKNOWN_LINE)
	{

	}
	void destory()
	{
		if (file != nullptr)
		{
			file->close();
			delete file;
			file = nullptr;
		}
		if (contentBuf != nullptr)
		{
			delete[]contentBuf;
			contentBuf = nullptr;
		}
	}
private:
	TextFileMgr& operator=(const TextFileMgr&) = delete;
	TextFileMgr(const TextFileMgr&) = delete;
};

struct BlockIndex {
	qint64 fileOffset;//��Ŀ�ʼ��ַ
	quint32 fileSize;//��Ĵ�С
	quint32 lineNumStart;//�����кŵĿ�ʼֵ
	quint32 lineNum;//���е�������
};

//������ı��ļ�,���Ա༭����Ϣ
struct BigTextEditFileMgr {
	QString filePath;
	QFile* file;
	uchar* filePtr;//ʹ�õ����ļ�ӳ��ķ�ʽ��
	quint32 m_curBlockIndex; //��ǰչʾ�еĿ��������
	int loadWithCode; //�Ժ��ֱ��������ؽ����ļ���Ĭ��UTF8
	int lineEndType;//��β���ͣ�win linux mac
	static const qint16 BLOCK_SIZE = 1;//���С����λM����ʼ��4M�����ֿ�Խ����Խ�࣬��ô��һ���ж�λ�е�λ��Խ��

	QVector<BlockIndex> blocks;//ÿһ������������ļ���ʱ����Ҫ����������
	
	BigTextEditFileMgr():filePtr(nullptr), file(nullptr), m_curBlockIndex(0), loadWithCode(CODE_ID::UNKOWN), lineEndType(RC_LINE_FORM::UNKNOWN_LINE)
	{
	}
	void destory()
	{
		if (filePtr != nullptr)
		{
			if (file != nullptr)
			{
				file->unmap(filePtr);
				file->close();
				delete file;
				file = nullptr;
			}
			filePtr = nullptr;
		}
	}
private:
	BigTextEditFileMgr& operator=(const TextFileMgr&) = delete;
	BigTextEditFileMgr(const TextFileMgr&) = delete;
};

class CCNotePad;

class FileManager:public QObject
{
	Q_OBJECT
public:
	ScintillaEditView* newEmptyDocument(bool isBigText = false);

	ScintillaHexEditView * newEmptyHexDocument();

	int getNextNewFileId();

	void insertNewFileNode(NewFileIdMgr node);

	void delNewFileNode(int fileIndex);

	int loadFileDataInText(ScintillaEditView * editView, QString filePath, CODE_ID & fileTextCode, RC_LINE_FORM &lineEnd, CCNotePad * callbackObj=nullptr, bool hexAsk = true);

	int loadFileForSearch(ScintillaEditView * editView, QString filePath);

	//int loadFileData(ScintillaEditView * editView, QString filePath, CODE_ID & fileTextCode, RC_LINE_FORM & lineEnd);

	int loadFilePreNextPage(int dir, QString & filePath, HexFileMgr *& hexFileOut);

	int loadFilePreNextPage(int dir, QString & filePath, TextFileMgr *& hexFileOut);

	int loadFileFromAddr(QString filePath, qint64 addr, HexFileMgr *& hexFileOut);

	int loadFileFromAddr(QString filePath, qint64 addr, TextFileMgr *& hexFileOut);

	bool loadFileData(QString filePath, HexFileMgr * & hexFileOut);

	bool loadFileData(QString filePath, TextFileMgr *& textFileOut, RC_LINE_FORM & lineEnd);

	bool loadFileDataWithIndex(QString filePath, BigTextEditFileMgr*& textFileOut);

	HexFileMgr* getHexFileHand(QString filepath);

	BigTextEditFileMgr* getBigFileEditMgr(QString filepath);

	TextFileMgr* getSuperBigFileMgr(QString filepath);

	int getBigFileBlockId(QString filepath, quint32 lineNum);

	void closeHexFileHand(QString filepath);

	void closeSuperBigTextFileHand(QString filepath);

	void closeBigTextRoFileHand(QString filepath);

	LangType detectLanguageFromTextBegining(const unsigned char * data, size_t dataLen);

	static FileManager& getInstance() {
		static FileManager instance;
		return instance;
	};

	ERROR_TYPE getLastErrorCode()
	{
		return m_lastErrorCode;
	}

	void resetLastErrorCode()
	{
		m_lastErrorCode = NONE_ERROR;
	}

private:
	FileManager();
	~FileManager();
	int createBlockIndex(BigTextEditFileMgr* txtFile);

	FileManager(const FileManager&) = delete;
	FileManager& operator=(const FileManager&) = delete;

	QList<NewFileIdMgr> m_newFileIdList;

	QMap<QString, HexFileMgr*> m_hexFileMgr;

	QMap<QString, TextFileMgr*> m_bigTxtFileMgr;

	QMap<QString, BigTextEditFileMgr*> m_bigTxtEditFileMgr;

	ERROR_TYPE m_lastErrorCode;
};

