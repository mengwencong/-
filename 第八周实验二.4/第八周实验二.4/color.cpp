// color.cpp : 实现文件
//

#include "stdafx.h"
#include "第八周实验二.4.h"
#include "color.h"
#include "afxdialogex.h"


// color 对话框

IMPLEMENT_DYNAMIC(color, CDialogEx)

color::color(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

color::~color()
{
}

void color::DoDataExchange(CDataExchange* pDX)
{
	
}


BEGIN_MESSAGE_MAP(color, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &color::OnBnClickedButton1)
END_MESSAGE_MAP()


// color 消息处理程序


void color::OnBnClickedButton1()
{CDialogEx::OnOK();
	// TODO: 在此添加控件通知处理程序代码
}
