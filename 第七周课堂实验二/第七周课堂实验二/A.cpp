// A.cpp : 实现文件
//

#include "stdafx.h"
#include "第七周课堂实验二.h"
#include "A.h"
#include "afxdialogex.h"


// A 对话框

IMPLEMENT_DYNAMIC(A, CDialogEx)

A::A(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x1(_T(""))
	, x2(_T(""))
{

}

A::~A()
{
}

void A::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x1);
	DDX_Text(pDX, IDC_EDIT2, x2);
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &A::OnBnClickedButton1)
END_MESSAGE_MAP()


// A 消息处理程序


void A::OnBnClickedButton1()
{
	this->UpdateData(true);
	CString t;
	t = x1;
	x1= x2;
	x2 = t;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
