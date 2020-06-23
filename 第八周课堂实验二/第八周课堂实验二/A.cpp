// A.cpp : 实现文件
//

#include "stdafx.h"
#include "第八周课堂实验二.h"
#include "A.h"
#include "afxdialogex.h"


// A 对话框

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


// A 消息处理程序


BOOL A::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	k = "";
	z = "1223";
	x.AddString(_T("初始化"));
	x.AddString(_T("属性页"));
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void A::OnBnClickedButton1()
{
	int n = x.GetCurSel();
	x.GetText(n, k);

	this->UpdateData(true);
	z = k;
	UpdateData(false);

	// TODO: 在此添加控件通知处理程序代码
}
