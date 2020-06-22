// Az.cpp : 实现文件
//

#include "stdafx.h"
#include "第七周课堂实验一.h"
#include "Az.h"
#include "afxdialogex.h"


// Az 对话框

IMPLEMENT_DYNAMIC(Az, CDialogEx)

Az::Az(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Az::~Az()
{
}

void Az::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Az, CDialogEx)
END_MESSAGE_MAP()


// Az 消息处理程序


BOOL Az::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	s = "你已退出";
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
