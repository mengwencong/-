// A.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ��ܿ���ʵ���.h"
#include "A.h"
#include "afxdialogex.h"


// A �Ի���

IMPLEMENT_DYNAMIC(A, CDialogEx)

A::A(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, z(_T(""))
{

}

A::~A()
{
}

void A::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, x);
	DDX_Text(pDX, IDC_EDIT1, z);
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &A::OnBnClickedButton1)
END_MESSAGE_MAP()


// A ��Ϣ�������


BOOL A::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	k = "";
	z = "1223";
	x.AddString(_T("��ʼ��"));
	x.AddString(_T("����ҳ"));
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void A::OnBnClickedButton1()
{
	int n = x.GetCurSel();
	x.GetText(n, k);

	this->UpdateData(true);
	z = k;
	UpdateData(false);

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
