
// 第九周实验一Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "第九周实验一.h"
#include "第九周实验一Dlg.h"
#include "afxdialogex.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// C第九周实验一Dlg 对话框



C第九周实验一Dlg::C第九周实验一Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MY_DIALOG, pParent)
	, str(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C第九周实验一Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, LBox);
	DDX_Text(pDX, IDC_EDIT2, str);
}

BEGIN_MESSAGE_MAP(C第九周实验一Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_LBN_SELCHANGE(IDC_LIST1, &C第九周实验一Dlg::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON1, &C第九周实验一Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDOK, &C第九周实验一Dlg::OnBnClickedOk)
END_MESSAGE_MAP()


// C第九周实验一Dlg 消息处理程序

BOOL C第九周实验一Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	ifstream ifs(_T("C:\\英雄时刻\\abc.txt"));
	string s;
	while (ifs >> s)
	{
		LBox.AddString(CString(s.c_str()));
	}
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void C第九周实验一Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void C第九周实验一Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR C第九周实验一Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C第九周实验一Dlg::OnLbnSelchangeList1()
{
	// TODO: 在此添加控件通知处理程序代码
	int n = LBox.GetCurSel();
	LBox.GetText(n, str);
	SetDlgItemText(IDC_EDIT2, str);
}


void C第九周实验一Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	int n = LBox.GetCurSel();
	LBox.DeleteString(n);
	GetDlgItemText(IDC_EDIT2, str);
	LBox.InsertString(n, str);
}

void C第九周实验一Dlg::sFile()
{

	CDialogEx::OnOK();
	ofstream ofs(_T("C:\\英雄时刻\\abc.txt"));
	CString name;

	int n = LBox.GetCount();

	for (int i = 0; i < n; i++)
	{
		LBox.GetText(i, name);
		ofs << CT2A(name) << "\n";
	}

}

void C第九周实验一Dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	sFile();
	CDialogEx::OnOK();
}
