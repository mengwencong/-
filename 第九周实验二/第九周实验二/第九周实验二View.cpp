
// �ھ���ʵ���View.cpp : C�ھ���ʵ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ھ���ʵ���.h"
#endif

#include "�ھ���ʵ���Doc.h"
#include "�ھ���ʵ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ھ���ʵ���View

IMPLEMENT_DYNCREATE(C�ھ���ʵ���View, CView)

BEGIN_MESSAGE_MAP(C�ھ���ʵ���View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C�ھ���ʵ���View ����/����

C�ھ���ʵ���View::C�ھ���ʵ���View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ھ���ʵ���View::~C�ھ���ʵ���View()
{
}

BOOL C�ھ���ʵ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ھ���ʵ���View ����

void C�ھ���ʵ���View::OnDraw(CDC* pDC)
{
	C�ھ���ʵ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
	{
		pDC->Ellipse(pDoc->ca[i]);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ھ���ʵ���View ���

#ifdef _DEBUG
void C�ھ���ʵ���View::AssertValid() const
{
	CView::AssertValid();
}

void C�ھ���ʵ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ھ���ʵ���Doc* C�ھ���ʵ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ھ���ʵ���Doc)));
	return (C�ھ���ʵ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ھ���ʵ���View ��Ϣ�������


void C�ھ���ʵ���View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C�ھ���ʵ���Doc* pDoc = GetDocument();
	if (nFlags)
	{
		rect.left = point.x - 100;
		rect.right = point.x + 100;
		rect.top = point.y - 110;
		rect.bottom = point.y + 100;

		pDoc->ca.Add(rect);
		this->Invalidate();

	}
	CView::OnMouseMove(nFlags, point);
}
