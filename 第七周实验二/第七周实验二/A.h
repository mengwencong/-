#pragma once


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
	int x1;
	int x2;
	int x3;
	afx_msg void OnBnClickedButton1();
};
