
// 第五周实验三View.cpp : C第五周实验三View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第五周实验三.h"
#endif

#include "第五周实验三Doc.h"
#include "第五周实验三View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第五周实验三View

IMPLEMENT_DYNCREATE(C第五周实验三View, CView)

BEGIN_MESSAGE_MAP(C第五周实验三View, CView)
	ON_COMMAND(ID_32771, &C第五周实验三View::On32771)
	ON_COMMAND(ID_32772, &C第五周实验三View::On32772)
	ON_COMMAND(ID_32773, &C第五周实验三View::On32773)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C第五周实验三View 构造/析构

C第五周实验三View::C第五周实验三View()
{
	A.left = x1;
	A.top = y1;
	A.right = x2;
	A.bottom = y2;
	// TODO: 在此处添加构造代码

}

C第五周实验三View::~C第五周实验三View()
{
}

BOOL C第五周实验三View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第五周实验三View 绘制

void C第五周实验三View::OnDraw(CDC* pDC)
{
	C第五周实验三Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	switch (n)
	{
	case 1:
	{	POINT m_point[2]{ { x1,y1 },{ x2,y2 } };
	pDC->MoveTo(m_point[0]);
	pDC->LineTo(m_point[1]);
	break; }
	case 2:
	{pDC->Rectangle(A);
	break;
	}
	case 3:
	{pDC->Ellipse(A);
	break; }
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// C第五周实验三View 诊断

#ifdef _DEBUG
void C第五周实验三View::AssertValid() const
{
	CView::AssertValid();
}

void C第五周实验三View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第五周实验三Doc* C第五周实验三View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第五周实验三Doc)));
	return (C第五周实验三Doc*)m_pDocument;
}
#endif //_DEBUG


// C第五周实验三View 消息处理程序


void C第五周实验三View::On32771()
{
	n = 1;
	// TODO: 在此添加命令处理程序代码
}


void C第五周实验三View::On32772()
{
	n = 2;
	// TODO: 在此添加命令处理程序代码
}


void C第五周实验三View::On32773()
{
	n = 3;
	// TODO: 在此添加命令处理程序代码
}


void C第五周实验三View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x1 = point.x;y1 = point.y;
	start = point;
	flag = 1;

	CView::OnLButtonDown(nFlags, point);
}


void C第五周实验三View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	x2 = point.x;y2 = point.y;
	A.left = x1;A.top = y1;
	A.right = x2;A.bottom = y2;
	Invalidate();
	flag = 0;

	CView::OnLButtonUp(nFlags, point);
}


void C第五周实验三View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		x2 = point.x;y2 = point.y;
		A.left = x1;A.top = y1;
		A.right = x2;A.bottom = y2;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
