// color.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ���ʵ���.4.h"
#include "color.h"
#include "afxdialogex.h"


// color �Ի���

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


// color ��Ϣ�������


void color::OnBnClickedButton1()
{CDialogEx::OnOK();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
