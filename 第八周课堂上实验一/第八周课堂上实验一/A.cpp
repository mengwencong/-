// A.cpp : 实现文件
//

#include "stdafx.h"
#include "第八周课堂上实验一.h"
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
	DDX_Control(pDX, IDC_LIST1, X);
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &A::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON1, &A::OnBnClickedButton1)
END_MESSAGE_MAP()


// A 消息处理程序


void A::OnLbnSelchangeList1()
{
	// TODO: 在此添加控件通知处理程序代码
}


BOOL A::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	s = "";
	X.AddString(_T("异常: OCX 属性页应返回 FALSE"));
	X.AddString(_T("在此添加额外的初始化"));
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void A::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	int n = X.GetCurSel();
	X.GetText(n, s);
}
