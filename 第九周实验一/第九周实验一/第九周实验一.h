
// �ھ���ʵ��һ.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C�ھ���ʵ��һApp: 
// �йش����ʵ�֣������ �ھ���ʵ��һ.cpp
//

class C�ھ���ʵ��һApp : public CWinApp
{
public:
	C�ھ���ʵ��һApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C�ھ���ʵ��һApp theApp;