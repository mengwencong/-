
// 第八周实验二.3View.cpp : C第八周实验二3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第八周实验二.3.h"
#endif

#include "第八周实验二.3Doc.h"
#include "第八周实验二.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第八周实验二3View

IMPLEMENT_DYNCREATE(C第八周实验二3View, CView)

BEGIN_MESSAGE_MAP(C第八周实验二3View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第八周实验二3View 构造/析构

C第八周实验二3View::C第八周实验二3View()
{
	A.top = 100;
	A.left = 300;
	A.bottom = 500;
	A.right = 800;
	// TODO: 在此处添加构造代码

}

C第八周实验二3View::~C第八周实验二3View()
{
}

BOOL C第八周实验二3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第八周实验二3View 绘制

void C第八周实验二3View::OnDraw(CDC* pDC)
{
	C第八周实验二3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第八周实验二3View 打印

BOOL C第八周实验二3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C第八周实验二3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C第八周实验二3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C第八周实验二3View 诊断

#ifdef _DEBUG
void C第八周实验二3View::AssertValid() const
{
	CView::AssertValid();
}

void C第八周实验二3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第八周实验二3Doc* C第八周实验二3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第八周实验二3Doc)));
	return (C第八周实验二3Doc*)m_pDocument;
}
#endif //_DEBUG


// C第八周实验二3View 消息处理程序


void C第八周实验二3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (point.x > 300 && point.x < 800 && point.y>100 && point.y < 500)
	{
		CClientDC dc(this);
		CPen *oldpen;CPen	newpen;
		newpen.CreatePen(PS_DASH, 1, RGB(255, 0, 0));
		oldpen = dc.SelectObject(&newpen);
		CRect B(300, 100, 800, 500);
		GetDC()->Rectangle(B);
		GetDC()->SelectObject(oldpen);
		GetDC()->Ellipse(A);


	}
	CView::OnLButtonDown(nFlags, point);
}
