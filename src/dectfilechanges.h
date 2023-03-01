#pragma once

#ifdef WIN32

#include <stdio.h>

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN
#endif

//����NOMINMAX��֤std::min���ظ�����
#define NOMINMAX

#include <windows.h>

class DectFileChanges
{
public:
	DectFileChanges();
	~DectFileChanges();
	void AddFile(LPCTSTR szDirectory, DWORD dwNotifyFilter);
	BOOL DetectChanges();
	void Terminate();

private:
	LPCTSTR _szFile = nullptr;
	DWORD _dwNotifyFilter = 0;
	WIN32_FILE_ATTRIBUTE_DATA _lastFileInfo = {};

};

#endif
