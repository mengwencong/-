// A.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ���ʵ��һ.h"
#include "A.h"
#include "afxdialogex.h"


// A �Ի���

IMPLEMENT_DYNAMIC(A, CDialogEx)

A::A(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x1(0)
	, x2(0)
	, x3(0)
{

}

A::~A()
{
}

void A::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x1);
	DDX_Text(pDX, IDC_EDIT2, x2);
	DDX_Text(pDX, IDC_EDIT3, x3);
}


BEGIN_MESSAGE_MAP(A, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &A::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &A::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &A::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &A::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &A::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON5, &A::OnBnClickedButton5)
END_MESSAGE_MAP()


// A ��Ϣ�������


void A::OnBnClickedButton1()
{
	this->UpdateData(true);
	x3 = x1 + x2;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void A::OnBnClickedButton2()
{
	this->UpdateData(true);
	x3 = x1 - x2;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void A::OnBnClickedButton3()
{
	this->UpdateData(true);
	x3 = x1 * x2;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void A::OnBnClickedButton4()
{
	this->UpdateData(true);
	x3 = x1/x2;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void A::OnBnClickedButton6()
{
	this->UpdateData(true);
	x3 = sqrt(x1);
	UpdateData(false);

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void A::OnBnClickedButton5()
{
	this->UpdateData(true);
	x3 = 1/x1 ;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
