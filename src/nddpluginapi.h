#pragma once

#include <QObject>
#include <QMap>
#include <QVariant>

//����๩����е��ã����Ҫ��֤�����ABI�����ԡ�
//����ζ�ţ�������������ɾ�������еĺ����ͳ�Ա����;����ᵼ�²���޷����ݡ�
//��ʹ�ó��麯��֮����κ��麯��
//���������һ���������Ӧһ���ö������������ͻ��

class QsciScintilla;

class NddPluginApi  : public QObject
{
	Q_OBJECT

public:
	NddPluginApi(QObject *parent);
	~NddPluginApi();

	//��ȡ��ǰ�༭��Ķ������һ��Ҫÿ�ζ�̬��ȡ������Ҳ�����⣬һ��QsciScintilla�޸ģ����ǲ�����ABI���ݡ�
	//������������Ҫ�Ķ��Ĳ��֡�

	void setMainNotePad(QWidget* pWidget);

	//���������ǰ�༭��󣬾Ϳ��Զ�̬����������ˡ�����ǰ����QsciScintilla���಻�������޸ġ�
	QsciScintilla* getCurrentEidtHandle();



	//�������ĳ�Ա����Ҫ�ر�С�ģ�һ����������˳��Ͳ������������޸ġ�ֻ�������������ӡ�����ɾ����
public:
	//ʹ�ö�̬�������в����Ĵ��ݡ�ʹ��public���ݳ�Ա����
	QMap<QString, QVariant> m_parameter;
	QWidget* m_mainNotePad;
};
