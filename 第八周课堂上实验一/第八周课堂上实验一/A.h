#pragma once
#include "afxwin.h"


// A 对话框

class A : public CDialogEx
{
	DECLARE_DYNAMIC(A)

public:
	A(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~A();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
	CListBox X;
	CString s;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
};
