#pragma once
#include "afxwin.h"


// color �Ի���

class color : public CDialogEx
{
	DECLARE_DYNAMIC(color)

public:
	color(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~color();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CEdit x;
	afx_msg void OnBnClickedButton1();
};
