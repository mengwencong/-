
// 第三周实验三View.cpp : C第三周实验三View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第三周实验三.h"
#endif

#include "第三周实验三Doc.h"
#include "第三周实验三View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第三周实验三View

IMPLEMENT_DYNCREATE(C第三周实验三View, CView)

BEGIN_MESSAGE_MAP(C第三周实验三View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第三周实验三View 构造/析构

C第三周实验三View::C第三周实验三View()
{
	// TODO: 在此处添加构造代码

}

C第三周实验三View::~C第三周实验三View()
{
}

BOOL C第三周实验三View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第三周实验三View 绘制

void C第三周实验三View::OnDraw(CDC* pDC)
{
	C第三周实验三Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr1);
	pDC->Rectangle(pDoc->cr2);
	pDC->Rectangle(pDoc->cr3);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第三周实验三View 诊断

#ifdef _DEBUG
void C第三周实验三View::AssertValid() const
{
	CView::AssertValid();
}

void C第三周实验三View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第三周实验三Doc* C第三周实验三View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第三周实验三Doc)));
	return (C第三周实验三Doc*)m_pDocument;
}
#endif //_DEBUG


// C第三周实验三View 消息处理程序


void C第三周实验三View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第三周实验三Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	;
	CString A, B, C, D;
	D = _T("点击无效");

	if (point.x > 100 && point.x < 200 && point.y>150 && point.y < 250)
	{
		pDoc->a = rand() % 50 + 5;
		A.Format(_T("a=%d"), pDoc->a);
		dc.TextOutW(150, 180, A);

	}
	else if (point.x > 200 && point.x < 300 && point.y>250 && point.y < 350)
		{
			pDoc->b = rand() % 50 + 5;
			B.Format(_T("b=%d"), pDoc->b);
			dc.TextOutW(250, 250, B);

		}
		else	if (point.x > 300 && point.x < 400 && point.y>350 && point.y < 450)
			{
				pDoc->c = pDoc->a + pDoc->b;
				C.Format(_T("a+b=%d"), pDoc->c);
				dc.TextOutW(320, 400, C);
			}
			else
				dc.TextOutW(500, 500, D);
	CView::OnLButtonDown(nFlags, point);
}
