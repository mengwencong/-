
// 第八周实验二.4View.cpp : C第八周实验二4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第八周实验二.4.h"
#endif

#include "第八周实验二.4Doc.h"
#include "第八周实验二.4View.h"
#include"color.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第八周实验二4View

IMPLEMENT_DYNCREATE(C第八周实验二4View, CView)

BEGIN_MESSAGE_MAP(C第八周实验二4View, CView)
	ON_COMMAND(ID_out, &C第八周实验二4View::Onout)
END_MESSAGE_MAP()

// C第八周实验二4View 构造/析构

C第八周实验二4View::C第八周实验二4View()
{
	A.top = 100;
	A.left = 300;
	A.bottom = 500;
	A.right = 800;
	// TODO: 在此处添加构造代码

}

C第八周实验二4View::~C第八周实验二4View()
{
}

BOOL C第八周实验二4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第八周实验二4View 绘制

void C第八周实验二4View::OnDraw(CDC* pDC)
{
	C第八周实验二4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第八周实验二4View 诊断

#ifdef _DEBUG
void C第八周实验二4View::AssertValid() const
{
	CView::AssertValid();
}

void C第八周实验二4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第八周实验二4Doc* C第八周实验二4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第八周实验二4Doc)));
	return (C第八周实验二4Doc*)m_pDocument;
}
#endif //_DEBUG


// C第八周实验二4View 消息处理程序


void C第八周实验二4View::Onout()
{
	color cp;
	int r = cp.DoModal();
	if (r == IDOK)
	{
		CClientDC dc(this);
		
		dc.Ellipse(A);//
	



	}
	// TODO: 在此添加命令处理程序代码
}
