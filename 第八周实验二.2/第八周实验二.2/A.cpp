// A.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ���ʵ���.2.h"
#include "A.h"
#include "afxdialogex.h"


// A �Ի���

IMPLEMENT_DYNAMIC(A, CDialogEx)

A::A(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, X1(0)
	, X2(0)
	, X3(0)
{

}

A::~A()
{
}

void A::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, X1);
	DDX_Text(pDX, IDC_EDIT1, X2);
	DDX_Text(pDX, IDC_EDIT3, X3);
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
END_MESSAGE_MAP()


// A ��Ϣ�������
