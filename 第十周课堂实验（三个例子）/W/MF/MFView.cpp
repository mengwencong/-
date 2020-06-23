
// MFView.cpp : CMFView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MF.h"
#endif

#include "MFDoc.h"
#include "MFView.h"
#include"标头.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFView

IMPLEMENT_DYNCREATE(CMFView, CView)

BEGIN_MESSAGE_MAP(CMFView, CView)
END_MESSAGE_MAP()

// CMFView 构造/析构

CMFView::CMFView()
{
	// TODO: 在此处添加构造代码

}

CMFView::~CMFView()
{
}

BOOL CMFView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFView 绘制

void CMFView::OnDraw(CDC* pDC)
{
	CMFDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s = CString(pchar());
	pDC->TextOutW(200, 150, s);
	CString ss;
	ss.Format(_T("%d, 25222"));
	pDC->TextOutW(200, 150, ss);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFView 诊断

#ifdef _DEBUG
void CMFView::AssertValid() const
{
	CView::AssertValid();
}

void CMFView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFDoc* CMFView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFDoc)));
	return (CMFDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFView 消息处理程序
