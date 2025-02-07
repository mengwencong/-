
// 第四周实验课View.cpp : C第四周实验课View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周实验课.h"
#endif

#include "第四周实验课Doc.h"
#include "第四周实验课View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周实验课View

IMPLEMENT_DYNCREATE(C第四周实验课View, CView)

BEGIN_MESSAGE_MAP(C第四周实验课View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C第四周实验课View 构造/析构

C第四周实验课View::C第四周实验课View()
{
	// TODO: 在此处添加构造代码
	set = true;
	n = 5;
	for (int i = 0; i < n; i++) {
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

C第四周实验课View::~C第四周实验课View()
{
}

BOOL C第四周实验课View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周实验课View 绘制

void C第四周实验课View::OnDraw(CDC* pDC)
{
	C第四周实验课Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set) {
		for (int i = 0; i < n; i++) {
			SetTimer(i, rand() % 400 + 100, NULL);
			set = false;
		
		}
	
	
	
	}
	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < n; i++) {
		pDC->Ellipse(cr[i]);
	}
}


// C第四周实验课View 诊断

#ifdef _DEBUG
void C第四周实验课View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周实验课View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周实验课Doc* C第四周实验课View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周实验课Doc)));
	return (C第四周实验课Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周实验课View 消息处理程序


void C第四周实验课View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
