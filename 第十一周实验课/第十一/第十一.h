
// ��ʮһ.h : ��ʮһ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ʮһApp:
// �йش����ʵ�֣������ ��ʮһ.cpp
//

class C��ʮһApp : public CWinAppEx
{
public:
	C��ʮһApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ʮһApp theApp;
