// A.cpp : 实现文件
//

#include "stdafx.h"
#include "第七周实验二.h"
#include "A.h"
#include "afxdialogex.h"


// A 对话框

IMPLEMENT_DYNAMIC(A, CDialogEx)

A::A(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x1(0)
	, x2(0)
	, x3(0)
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
	DDX_Text(pDX, IDC_EDIT3, x3);
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &A::OnBnClickedButton1)
END_MESSAGE_MAP()


// A 消息处理程序


void A::OnBnClickedButton1()
{
	this->UpdateData(true);
	x3 = x1 + x2;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
