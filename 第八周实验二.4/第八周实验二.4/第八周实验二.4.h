
// �ڰ���ʵ���.4.h : �ڰ���ʵ���.4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ڰ���ʵ���4App:
// �йش����ʵ�֣������ �ڰ���ʵ���.4.cpp
//

class C�ڰ���ʵ���4App : public CWinApp
{
public:
	C�ڰ���ʵ���4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ڰ���ʵ���4App theApp;
