
// ��һ��ʵ��ڶ���View.cpp : C��һ��ʵ��ڶ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��һ��ʵ��ڶ���.h"
#endif

#include "��һ��ʵ��ڶ���Doc.h"
#include "��һ��ʵ��ڶ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��һ��ʵ��ڶ���View

IMPLEMENT_DYNCREATE(C��һ��ʵ��ڶ���View, CView)

BEGIN_MESSAGE_MAP(C��һ��ʵ��ڶ���View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��һ��ʵ��ڶ���View ����/����

C��һ��ʵ��ڶ���View::C��һ��ʵ��ڶ���View()
{
	// TODO: �ڴ˴���ӹ������

}

C��һ��ʵ��ڶ���View::~C��һ��ʵ��ڶ���View()
{
}

BOOL C��һ��ʵ��ڶ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��һ��ʵ��ڶ���View ����

void C��һ��ʵ��ڶ���View::OnDraw(CDC* /*pDC*/)
{
	C��һ��ʵ��ڶ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��һ��ʵ��ڶ���View ���

#ifdef _DEBUG
void C��һ��ʵ��ڶ���View::AssertValid() const
{
	CView::AssertValid();
}

void C��һ��ʵ��ڶ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��һ��ʵ��ڶ���Doc* C��һ��ʵ��ڶ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��һ��ʵ��ڶ���Doc)));
	return (C��һ��ʵ��ڶ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C��һ��ʵ��ڶ���View ��Ϣ�������


void C��һ��ʵ��ڶ���View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��һ��ʵ��ڶ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	if (!pDoc)

		return;

	pDoc-> count += 1;

	CView::OnLButtonDown(nFlags, point);
}


void C��һ��ʵ��ڶ���View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��һ��ʵ��ڶ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	if (!pDoc)
		return;

    CView:: OnRButtonUp(nFlags, point);

	CClientDC dc(this);

	CString k;

	k.Format(_T("%d"), pDoc->count);

	dc.TextOutW(100, 100, k);
	CView::OnLButtonUp(nFlags, point);
}
