
// ������ʵ����View.cpp : C������ʵ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ����.h"
#endif

#include "������ʵ����Doc.h"
#include "������ʵ����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ����View

IMPLEMENT_DYNCREATE(C������ʵ����View, CView)

BEGIN_MESSAGE_MAP(C������ʵ����View, CView)
	ON_COMMAND(ID_32771, &C������ʵ����View::On32771)
	ON_COMMAND(ID_32772, &C������ʵ����View::On32772)
	ON_COMMAND(ID_32773, &C������ʵ����View::On32773)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C������ʵ����View ����/����

C������ʵ����View::C������ʵ����View()
{
	A.left = x1;
	A.top = y1;
	A.right = x2;
	A.bottom = y2;
	// TODO: �ڴ˴���ӹ������

}

C������ʵ����View::~C������ʵ����View()
{
}

BOOL C������ʵ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ����View ����

void C������ʵ����View::OnDraw(CDC* pDC)
{
	C������ʵ����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	switch (n)
	{
	case 1:
	{	POINT m_point[2]{ { x1,y1 },{ x2,y2 } };
	pDC->MoveTo(m_point[0]);
	pDC->LineTo(m_point[1]);
	break; }
	case 2:
	{pDC->Rectangle(A);
	break;
	}
	case 3:
	{pDC->Ellipse(A);
	break; }
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ����View ���

#ifdef _DEBUG
void C������ʵ����View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ����Doc* C������ʵ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ����Doc)));
	return (C������ʵ����Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ����View ��Ϣ�������


void C������ʵ����View::On32771()
{
	n = 1;
	// TODO: �ڴ���������������
}


void C������ʵ����View::On32772()
{
	n = 2;
	// TODO: �ڴ���������������
}


void C������ʵ����View::On32773()
{
	n = 3;
	// TODO: �ڴ���������������
}


void C������ʵ����View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x1 = point.x;y1 = point.y;
	start = point;
	flag = 1;

	CView::OnLButtonDown(nFlags, point);
}


void C������ʵ����View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	x2 = point.x;y2 = point.y;
	A.left = x1;A.top = y1;
	A.right = x2;A.bottom = y2;
	Invalidate();
	flag = 0;

	CView::OnLButtonUp(nFlags, point);
}


void C������ʵ����View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		x2 = point.x;y2 = point.y;
		A.left = x1;A.top = y1;
		A.right = x2;A.bottom = y2;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
