
// ��һ��ʵ��ڶ���.h : ��һ��ʵ��ڶ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��һ��ʵ��ڶ���App:
// �йش����ʵ�֣������ ��һ��ʵ��ڶ���.cpp
//

class C��һ��ʵ��ڶ���App : public CWinApp
{
public:
	C��һ��ʵ��ڶ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��һ��ʵ��ڶ���App theApp;
