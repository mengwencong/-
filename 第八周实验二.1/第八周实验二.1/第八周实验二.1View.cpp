
// �ڰ���ʵ���.1View.cpp : C�ڰ���ʵ���1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڰ���ʵ���.1.h"
#endif

#include "�ڰ���ʵ���.1Doc.h"
#include "�ڰ���ʵ���.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڰ���ʵ���1View

IMPLEMENT_DYNCREATE(C�ڰ���ʵ���1View, CView)

BEGIN_MESSAGE_MAP(C�ڰ���ʵ���1View, CView)
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C�ڰ���ʵ���1View ����/����

C�ڰ���ʵ���1View::C�ڰ���ʵ���1View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ڰ���ʵ���1View::~C�ڰ���ʵ���1View()
{
}

BOOL C�ڰ���ʵ���1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڰ���ʵ���1View ����

void C�ڰ���ʵ���1View::OnDraw(CDC* pDC)
{
	C�ڰ���ʵ���1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(a);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ڰ���ʵ���1View ���

#ifdef _DEBUG
void C�ڰ���ʵ���1View::AssertValid() const
{
	CView::AssertValid();
}

void C�ڰ���ʵ���1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڰ���ʵ���1Doc* C�ڰ���ʵ���1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڰ���ʵ���1Doc)));
	return (C�ڰ���ʵ���1Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ڰ���ʵ���1View ��Ϣ�������


void C�ڰ���ʵ���1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	x2 = point.x;
	y2 = point.y;
	a.left = x1;
	a.top = y1;
	a.right = x2;
	a.bottom = y2;
	Invalidate();
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}


void C�ڰ���ʵ���1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		x2 = point.x;
		y2 = point.y;
		a.left = x1;
		a.top = y1;
		a.right = x2;
		a.bottom = y2;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void C�ڰ���ʵ���1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x1 = point.x;
	y1 = point.y;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}
