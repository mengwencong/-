
// 第八周实验二.1View.cpp : C第八周实验二1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第八周实验二.1.h"
#endif

#include "第八周实验二.1Doc.h"
#include "第八周实验二.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第八周实验二1View

IMPLEMENT_DYNCREATE(C第八周实验二1View, CView)

BEGIN_MESSAGE_MAP(C第八周实验二1View, CView)
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第八周实验二1View 构造/析构

C第八周实验二1View::C第八周实验二1View()
{
	// TODO: 在此处添加构造代码

}

C第八周实验二1View::~C第八周实验二1View()
{
}

BOOL C第八周实验二1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第八周实验二1View 绘制

void C第八周实验二1View::OnDraw(CDC* pDC)
{
	C第八周实验二1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(a);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第八周实验二1View 诊断

#ifdef _DEBUG
void C第八周实验二1View::AssertValid() const
{
	CView::AssertValid();
}

void C第八周实验二1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第八周实验二1Doc* C第八周实验二1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第八周实验二1Doc)));
	return (C第八周实验二1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第八周实验二1View 消息处理程序


void C第八周实验二1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	x2 = point.x;
	y2 = point.y;
	a.left = x1;
	a.top = y1;
	a.right = x2;
	a.bottom = y2;
	Invalidate();
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}


void C第八周实验二1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		x2 = point.x;
		y2 = point.y;
		a.left = x1;
		a.top = y1;
		a.right = x2;
		a.bottom = y2;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void C第八周实验二1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x1 = point.x;
	y1 = point.y;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}
