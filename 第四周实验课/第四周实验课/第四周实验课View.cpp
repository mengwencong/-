
// ������ʵ���View.cpp : C������ʵ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ���.h"
#endif

#include "������ʵ���Doc.h"
#include "������ʵ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ���View

IMPLEMENT_DYNCREATE(C������ʵ���View, CView)

BEGIN_MESSAGE_MAP(C������ʵ���View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C������ʵ���View ����/����

C������ʵ���View::C������ʵ���View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	n = 5;
	for (int i = 0; i < n; i++) {
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

C������ʵ���View::~C������ʵ���View()
{
}

BOOL C������ʵ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ���View ����

void C������ʵ���View::OnDraw(CDC* pDC)
{
	C������ʵ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set) {
		for (int i = 0; i < n; i++) {
			SetTimer(i, rand() % 400 + 100, NULL);
			set = false;
		
		}
	
	
	
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < n; i++) {
		pDC->Ellipse(cr[i]);
	}
}


// C������ʵ���View ���

#ifdef _DEBUG
void C������ʵ���View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ���Doc* C������ʵ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ���Doc)));
	return (C������ʵ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ���View ��Ϣ�������


void C������ʵ���View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
