// A.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�����ܿ���ʵ��һ.h"
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
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &A::OnEnChangeEdit1)
END_MESSAGE_MAP()


// A ��Ϣ�������


void A::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
