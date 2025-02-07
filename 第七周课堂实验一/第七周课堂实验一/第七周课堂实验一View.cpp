
// 第七周课堂实验一View.cpp : C第七周课堂实验一View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第七周课堂实验一.h"
#endif

#include "第七周课堂实验一Doc.h"
#include "第七周课堂实验一View.h"
#include "A.h"
#include "Az.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第七周课堂实验一View

IMPLEMENT_DYNCREATE(C第七周课堂实验一View, CView)

BEGIN_MESSAGE_MAP(C第七周课堂实验一View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_32771, &C第七周课堂实验一View::On32771)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// C第七周课堂实验一View 构造/析构

C第七周课堂实验一View::C第七周课堂实验一View()
{
	// TODO: 在此处添加构造代码

}

C第七周课堂实验一View::~C第七周课堂实验一View()
{
}

BOOL C第七周课堂实验一View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第七周课堂实验一View 绘制

void C第七周课堂实验一View::OnDraw(CDC* /*pDC*/)
{
	C第七周课堂实验一Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第七周课堂实验一View 打印

BOOL C第七周课堂实验一View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C第七周课堂实验一View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C第七周课堂实验一View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C第七周课堂实验一View 诊断

#ifdef _DEBUG
void C第七周课堂实验一View::AssertValid() const
{
	CView::AssertValid();
}

void C第七周课堂实验一View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第七周课堂实验一Doc* C第七周课堂实验一View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第七周课堂实验一Doc)));
	return (C第七周课堂实验一Doc*)m_pDocument;
}
#endif //_DEBUG


// C第七周课堂实验一View 消息处理程序


void C第七周课堂实验一View::On32771()
{
	Az dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s1;
		s1.Format(_T("%s"), dlg.s);
		GetDC()->TextOutW(200, 300, s1);
	}
	// TODO: 在此添加命令处理程序代码
}


void C第七周课堂实验一View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	A*pd = new A;


	CView::OnLButtonDblClk(nFlags, point);
}
