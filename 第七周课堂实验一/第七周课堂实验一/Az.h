#pragma once


// Az �Ի���

class Az : public CDialogEx
{
	DECLARE_DYNAMIC(Az)

public:
	Az(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Az();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();	CString s;
};
