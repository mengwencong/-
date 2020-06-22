#pragma once


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
	CString X1;
	int x2;
	CString x3;
	afx_msg void OnBnClickedButton1();
};
