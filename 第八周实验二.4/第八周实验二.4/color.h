#pragma once
#include "afxwin.h"


// color 对话框

class color : public CDialogEx
{
	DECLARE_DYNAMIC(color)

public:
	color(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~color();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit x;
	afx_msg void OnBnClickedButton1();
};
