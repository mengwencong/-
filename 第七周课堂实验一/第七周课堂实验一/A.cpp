// A.cpp : 实现文件
//

#include "stdafx.h"
#include "第七周课堂实验一.h"
#include "A.h"
#include "afxdialogex.h"


// A 对话框

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
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &A::OnEnChangeEdit1)
END_MESSAGE_MAP()


// A 消息处理程序


void A::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
