
// 第一章实验第一题.h : 第一章实验第一题 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C第一章实验第一题App:
// 有关此类的实现，请参阅 第一章实验第一题.cpp
//

class C第一章实验第一题App : public CWinApp
{
public:
	C第一章实验第一题App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C第一章实验第一题App theApp;
