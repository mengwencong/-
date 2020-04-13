
// 第一章实验第一题View.cpp : C第一章实验第一题View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第一章实验第一题.h"
#endif

#include "第一章实验第一题Doc.h"
#include "第一章实验第一题View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第一章实验第一题View

IMPLEMENT_DYNCREATE(C第一章实验第一题View, CView)

BEGIN_MESSAGE_MAP(C第一章实验第一题View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第一章实验第一题View 构造/析构

C第一章实验第一题View::C第一章实验第一题View()
{
	// TODO: 在此处添加构造代码

}

C第一章实验第一题View::~C第一章实验第一题View()
{
}

BOOL C第一章实验第一题View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第一章实验第一题View 绘制

void C第一章实验第一题View::OnDraw(CDC* pDC)
{
	C第一章实验第一题Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第一章实验第一题View 诊断

#ifdef _DEBUG
void C第一章实验第一题View::AssertValid() const
{
	CView::AssertValid();
}

void C第一章实验第一题View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第一章实验第一题Doc* C第一章实验第一题View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第一章实验第一题Doc)));
	return (C第一章实验第一题Doc*)m_pDocument;
}
#endif //_DEBUG


// C第一章实验第一题View 消息处理程序


void C第一章实验第一题View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第一章实验第一题Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	
	CDC* pDC;
	pDC = GetDC();
	if (pDoc)

	pDC->TextOutW(60,60,pDoc->name);
	
		
	CView::OnLButtonDown(nFlags, point);
}
