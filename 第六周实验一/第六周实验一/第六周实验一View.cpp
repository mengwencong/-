
// ������ʵ��һView.cpp : C������ʵ��һView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ��һ.h"
#endif

#include "������ʵ��һDoc.h"
#include "������ʵ��һView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ��һView

IMPLEMENT_DYNCREATE(C������ʵ��һView, CView)

BEGIN_MESSAGE_MAP(C������ʵ��һView, CView)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// C������ʵ��һView ����/����

C������ʵ��һView::C������ʵ��һView()
{
	text = "";// TODO: �ڴ˴���ӹ������

}

C������ʵ��һView::~C������ʵ��һView()
{
}

BOOL C������ʵ��һView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ��һView ����

void C������ʵ��һView::OnDraw(CDC* /*pDC*/)
{
	C������ʵ��һDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ��һView ���

#ifdef _DEBUG
void C������ʵ��һView::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ��һView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ��һDoc* C������ʵ��һView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ��һDoc)));
	return (C������ʵ��һDoc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ��һView ��Ϣ�������






void C������ʵ��һView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	CRect a(point.x -100, point.y - 200, point.x + 100, point.y + 200);
	dc.Rectangle(a);
	Invalidate();
	CView::OnMouseMove(nFlags, point);
	CView::OnMouseMove(nFlags, point);
}
void C������ʵ��һView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	CRect a(point.x - 100, point.y - 200, point.x + 100, point.y + 200);
	dc.Rectangle(a);
	CView::OnLButtonDown(nFlags, point);
}
void C������ʵ��һView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	CRect a(point.x - 100, point.y - 200, point.x + 100, point.y + 200);
	dc.Rectangle(a);
	CView::OnLButtonUp(nFlags, point);
}



void C������ʵ��һView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	text +=  nChar;
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}
