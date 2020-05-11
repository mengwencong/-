
// 第三周实验课一View.cpp : C第三周实验课一View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第三周实验课一.h"
#endif

#include "第三周实验课一Doc.h"
#include "第三周实验课一View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第三周实验课一View

IMPLEMENT_DYNCREATE(C第三周实验课一View, CView)

BEGIN_MESSAGE_MAP(C第三周实验课一View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C第三周实验课一View 构造/析构

C第三周实验课一View::C第三周实验课一View()
{
	// TODO: 在此处添加构造代码

}

C第三周实验课一View::~C第三周实验课一View()
{
}

BOOL C第三周实验课一View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第三周实验课一View 绘制

void C第三周实验课一View::OnDraw(CDC* /*pDC*/)
{
	C第三周实验课一Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第三周实验课一View 诊断

#ifdef _DEBUG
void C第三周实验课一View::AssertValid() const
{
	CView::AssertValid();
}

void C第三周实验课一View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第三周实验课一Doc* C第三周实验课一View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第三周实验课一Doc)));
	return (C第三周实验课一Doc*)m_pDocument;
}
#endif //_DEBUG


// C第三周实验课一View 消息处理程序


void C第三周实验课一View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	bool t;
	t = true;
	CString str;
	str = _T("左键正被按下");
	CDC* pDC;
	pDC = GetDC();
	if (t) {
		pDC->TextOutW(60, 60, str);
		t = false;
	}
	CView::OnLButtonDown(nFlags, point);
}


void C第三周实验课一View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString str;
	str = _T("左键正在抬起");
	CDC* pDC;
	pDC = GetDC();
	pDC->TextOutW(100, 100, str);
	CView::OnLButtonUp(nFlags, point);
}
