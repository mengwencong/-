
// �����ܿ���ʵ��һ����Բ.h : �����ܿ���ʵ��һ����Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�����ܿ���ʵ��һ����ԲApp:
// �йش����ʵ�֣������ �����ܿ���ʵ��һ����Բ.cpp
//

class C�����ܿ���ʵ��һ����ԲApp : public CWinApp
{
public:
	C�����ܿ���ʵ��һ����ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����ܿ���ʵ��һ����ԲApp theApp;
