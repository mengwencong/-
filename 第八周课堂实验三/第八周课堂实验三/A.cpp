// A.cpp : 实现文件
//

#include "stdafx.h"
#include "第八周课堂实验三.h"
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
	DDX_Control(pDX, IDC_LIST1, x);
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
END_MESSAGE_MAP()


// A 消息处理程序


BOOL A::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	x.AddString(_T("此添加额外的"));
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
