#pragma once
#include <QString>
#include <QMenu>

#define NDD_EXPORTDLL

#if defined(Q_OS_WIN)
	#if defined(NDD_EXPORTDLL)
		#define NDD_EXPORT __declspec(dllexport)
	#else
		#define NDD_EXPORT __declspec(dllimport)
	#endif
#else
	#define NDD_EXPORT __attribute__((visibility("default")))
#endif

struct ndd_proc_data
{
	QString m_strPlugName; //������� ��ѡ
	QString m_strFilePath; //lib �����ȫ��·������ѡ������ڲ����ù�,�����򴫵�����
	QString m_strComment; //���˵��
	QString m_version; //�汾���롣��ѡ
	QString m_auther;//�������ơ���ѡ
	int m_menuType;//�˵����͡�0����ʹ�ö����˵� 1�����������˵�
	QMenu* m_rootMenu;//���m_menuType = 1�������������˵��ĵ�ַ������ֵnullptr

	ndd_proc_data(): m_rootMenu(nullptr), m_menuType(0)
	{

	}
};


typedef struct ndd_proc_data NDD_PROC_DATA;

typedef bool (*NDD_PROC_IDENTIFY_CALLBACK)(NDD_PROC_DATA* pProcData);
typedef void (*NDD_PROC_FOUND_CALLBACK)(NDD_PROC_DATA* pProcData, void* pUserData);
