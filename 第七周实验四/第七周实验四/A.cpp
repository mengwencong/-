// A.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "������ʵ����.h"
#include "A.h"
#include "afxdialogex.h"


// A �Ի���

IMPLEMENT_DYNAMIC(A, CDialogEx)

A::A(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, X1(_T(""))
	, x2(0)
	, x3(_T(""))
{

}

A::~A()
{
}

void A::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, X1);
	DDX_Text(pDX, IDC_EDIT2, x2);
	DDX_Text(pDX, IDC_EDIT3, x3);
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &A::OnBnClickedButton1)
END_MESSAGE_MAP()


// A ��Ϣ�������


void A::OnBnClickedButton1()
{
	A a;
	this->UpdateData(true);
	CString s1;
	s1.Format(_T("%s"), x2);
	x3 = s1 + X1;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
