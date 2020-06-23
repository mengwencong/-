
// ceshiView.cpp : CceshiView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ceshi.h"
#endif

#include "ceshiDoc.h"
#include "ceshiView.h"
#include"sd.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CceshiView

IMPLEMENT_DYNCREATE(CceshiView, CView)

BEGIN_MESSAGE_MAP(CceshiView, CView)
END_MESSAGE_MAP()

// CceshiView 构造/析构

CceshiView::CceshiView()
{
	// TODO: 在此处添加构造代码

}

CceshiView::~CceshiView()
{
}

BOOL CceshiView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CceshiView 绘制

void CceshiView::OnDraw(CDC* pDC)
{
	CceshiDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	int n = 5;
	int a = Factorial(5);
	if (a == 0)
	{
		pDC->TextOutW(200, 180, _T("n的值必须大于0"));
	}
	if (a == -1)
	{
		pDC->TextOutW(200, 180, _T("n的阶乘结果溢出"));
	}
	if (a != 0 && a != -1)
	{
		s.Format(_T("%d的阶乘为%d"), n, a);
		pDC->TextOutW(200, 100, s);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CceshiView 诊断

#ifdef _DEBUG
void CceshiView::AssertValid() const
{
	CView::AssertValid();
}

void CceshiView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CceshiDoc* CceshiView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CceshiDoc)));
	return (CceshiDoc*)m_pDocument;
}
#endif //_DEBUG


// CceshiView 消息处理程序
