
// �����ܿ���ʵ��һ����ԲView.cpp : C�����ܿ���ʵ��һ����ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����ܿ���ʵ��һ����Բ.h"
#endif

#include "�����ܿ���ʵ��һ����ԲDoc.h"
#include "�����ܿ���ʵ��һ����ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����ܿ���ʵ��һ����ԲView

IMPLEMENT_DYNCREATE(C�����ܿ���ʵ��һ����ԲView, CView)

BEGIN_MESSAGE_MAP(C�����ܿ���ʵ��һ����ԲView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C�����ܿ���ʵ��һ����ԲView ����/����

C�����ܿ���ʵ��һ����ԲView::C�����ܿ���ʵ��һ����ԲView()
{
	set = 1;
	// TODO: �ڴ˴���ӹ������

}

C�����ܿ���ʵ��һ����ԲView::~C�����ܿ���ʵ��һ����ԲView()
{
}

BOOL C�����ܿ���ʵ��һ����ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����ܿ���ʵ��һ����ԲView ����

void C�����ܿ���ʵ��һ����ԲView::OnDraw(CDC* pDC)
{
	C�����ܿ���ʵ��һ����ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	/*GetClientRect(&cr1);
	a = (cr1.right - cr1.left) / 2;
	b = (cr1.bottom - cr1.top) / 2;
	//a = cs.cx/2;
	//b = cs.cy/2;
	if (set == 1)
	{
		SetTimer(NULL, rand() % 400 + 100, NULL);

		set = 0;
	}


	pDC->Ellipse(cr);//���������ʾ�����Բ*/

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	GetClientRect(&cr1);//���������ʾ��ɫ�����Բ
	CPen NewPen;
	CPen	*poldPen;
	NewPen.CreatePen(PS_SOLID, 1, RGB(0, rand() % 1000, 0));
	poldPen = pDC->SelectObject(&NewPen);
	a = (cr1.right - cr1.left) / 2;
	b = (cr1.bottom - cr1.top) / 2;
	//a = cs.cx/2;
	//b = cs.cy/2;
	if (set == 1)
	{
		SetTimer(NULL, rand() % 500 + 200, NULL);

		set = 0;
	}


	pDC->Ellipse(cr);
	pDC->SelectObject(poldPen);
	NewPen.DeleteObject();
}


// C�����ܿ���ʵ��һ����ԲView ���

#ifdef _DEBUG
void C�����ܿ���ʵ��һ����ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C�����ܿ���ʵ��һ����ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����ܿ���ʵ��һ����ԲDoc* C�����ܿ���ʵ��һ����ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����ܿ���ʵ��һ����ԲDoc)));
	return (C�����ܿ���ʵ��һ����ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C�����ܿ���ʵ��һ����ԲView ��Ϣ�������


void C�����ܿ���ʵ��һ����ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	cr.left = a;
	cr.top = b;
	cr.right = a;
	cr.bottom = b;
	CView::OnLButtonDown(nFlags, point);
}


void C�����ܿ���ʵ��һ����ԲView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C�����ܿ���ʵ��һ����ԲDoc* pDoc = GetDocument();
	cr.left -= 0.5;cr.top -= 0.5;
	cr.right += 0.5;cr.bottom += 0.5;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
