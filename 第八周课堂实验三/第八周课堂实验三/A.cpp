// A.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ��ܿ���ʵ����.h"
#include "A.h"
#include "afxdialogex.h"


// A �Ի���

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


// A ��Ϣ�������


BOOL A::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	x.AddString(_T("����Ӷ����"));
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
