#pragma once
#include "afxwin.h"


// A �Ի���

class A : public CDialogEx
{
	DECLARE_DYNAMIC(A)

public:
	A(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~A();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
	CListBox X;
	CString s;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
};
