// A.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ��ܿ�����ʵ��һ.h"
#include "A.h"
#include "afxdialogex.h"


// A �Ի���

IMPLEMENT_DYNAMIC(A, CDialogEx)

A::A(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

A::~A()
{
}

void A::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, X);
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &A::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON1, &A::OnBnClickedButton1)
END_MESSAGE_MAP()


// A ��Ϣ�������


void A::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


BOOL A::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	s = "";
	X.AddString(_T("�쳣: OCX ����ҳӦ���� FALSE"));
	X.AddString(_T("�ڴ���Ӷ���ĳ�ʼ��"));
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void A::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	int n = X.GetCurSel();
	X.GetText(n, s);
}
