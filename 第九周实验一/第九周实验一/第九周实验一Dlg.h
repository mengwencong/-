
// �ھ���ʵ��һDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// C�ھ���ʵ��һDlg �Ի���
class C�ھ���ʵ��һDlg : public CDialogEx
{
// ����
public:
	C�ھ���ʵ��һDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
	CListBox LBox;
	CString str;
	 void sFile();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOk();
};
