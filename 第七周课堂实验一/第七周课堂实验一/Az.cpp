// Az.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�����ܿ���ʵ��һ.h"
#include "Az.h"
#include "afxdialogex.h"


// Az �Ի���

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


// Az ��Ϣ�������


BOOL Az::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	s = "�����˳�";
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
