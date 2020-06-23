
// 第八周实验二.2View.cpp : C第八周实验二2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第八周实验二.2.h"
#endif

#include "第八周实验二.2Doc.h"
#include "第八周实验二.2View.h"
#include"A.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第八周实验二2View

IMPLEMENT_DYNCREATE(C第八周实验二2View, CView)

BEGIN_MESSAGE_MAP(C第八周实验二2View, CView)
	ON_COMMAND(ID_32771, &C第八周实验二2View::On32771)
END_MESSAGE_MAP()

// C第八周实验二2View 构造/析构

C第八周实验二2View::C第八周实验二2View()
{
	// TODO: 在此处添加构造代码

}

C第八周实验二2View::~C第八周实验二2View()
{
}

BOOL C第八周实验二2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第八周实验二2View 绘制

void C第八周实验二2View::OnDraw(CDC* /*pDC*/)
{
	C第八周实验二2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第八周实验二2View 诊断

#ifdef _DEBUG
void C第八周实验二2View::AssertValid() const
{
	CView::AssertValid();
}

void C第八周实验二2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第八周实验二2Doc* C第八周实验二2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第八周实验二2Doc)));
	return (C第八周实验二2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第八周实验二2View 消息处理程序


void C第八周实验二2View::On32771()
{
	A a;
	int t = a.DoModal();
	if (t == IDOK) {
		int r, x, y;
		r = a.X1;
		x = a.X2;
		y = a.X3;
		CRect B(x - r + 1, y - r + 1, x + r, y + r);
		GetDC()->Ellipse(B);
	
	}
	// TODO: 在此添加命令处理程序代码
}
