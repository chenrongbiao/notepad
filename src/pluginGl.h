#pragma once
#include <QString>
#include <QMenu>

struct ndd_proc_data
{
	QString m_strPlugName; //������� ��ѡ�������������д
	QString m_strFilePath; //lib �����ȫ��·������ѡ������ڲ�������д,�����򴫵�����
	QString m_strComment; //���˵���������������д
	QString m_version; //�汾���롣��ѡ�������������д
	QString m_auther;//�������ơ���ѡ�������������д
	int m_menuType;//�˵����͡�0����ʹ�ö����˵� 1�����������˵��������������д
	QMenu* m_rootMenu;//���m_menuType = 1�������������˵��ĵ�ַ������ֵnullptr ����ڲ�������д�������򴫵�����

	ndd_proc_data(): m_rootMenu(nullptr), m_menuType(0)
	{

	}
};

//#define NDD_PROC_IDENTIFY ("nddProc")

typedef struct ndd_proc_data NDD_PROC_DATA;

typedef bool (*NDD_PROC_IDENTIFY_CALLBACK)(NDD_PROC_DATA* pProcData);
typedef void (*NDD_PROC_FOUND_CALLBACK)(NDD_PROC_DATA* pProcData, void* pUserData);
