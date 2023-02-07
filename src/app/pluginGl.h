#pragma once
#include <QString>

struct ndd_proc_data
{
	QString m_strPlugName; //������� ��ѡ
	QString m_strFilePath; //lib �����ȫ��·������ѡ
	QString m_strComment; //���˵��
	QString m_version; //�汾���롣��ѡ
	QString m_auther;//�������ơ���ѡ
};

//#define NDD_PROC_IDENTIFY ("nddProc")

typedef struct ndd_proc_data NDD_PROC_DATA;

typedef bool (*NDD_PROC_IDENTIFY_CALLBACK)(NDD_PROC_DATA* pProcData);
typedef void (*NDD_PROC_FOUND_CALLBACK)(NDD_PROC_DATA* pProcData, void* pUserData);