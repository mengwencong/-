
// ��һ��ʵ���һ��View.cpp : C��һ��ʵ���һ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��һ��ʵ���һ��.h"
#endif

#include "��һ��ʵ���һ��Doc.h"
#include "��һ��ʵ���һ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��һ��ʵ���һ��View

IMPLEMENT_DYNCREATE(C��һ��ʵ���һ��View, CView)

BEGIN_MESSAGE_MAP(C��һ��ʵ���һ��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��һ��ʵ���һ��View ����/����

C��һ��ʵ���һ��View::C��һ��ʵ���һ��View()
{
	// TODO: �ڴ˴���ӹ������

}

C��һ��ʵ���һ��View::~C��һ��ʵ���һ��View()
{
}

BOOL C��һ��ʵ���һ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��һ��ʵ���һ��View ����

void C��һ��ʵ���һ��View::OnDraw(CDC* pDC)
{
	C��һ��ʵ���һ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��һ��ʵ���һ��View ���

#ifdef _DEBUG
void C��һ��ʵ���һ��View::AssertValid() const
{
	CView::AssertValid();
}

void C��һ��ʵ���һ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��һ��ʵ���һ��Doc* C��һ��ʵ���һ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��һ��ʵ���һ��Doc)));
	return (C��һ��ʵ���һ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C��һ��ʵ���һ��View ��Ϣ�������


void C��һ��ʵ���һ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��һ��ʵ���һ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	
	CDC* pDC;
	pDC = GetDC();
	if (pDoc)

	pDC->TextOutW(60,60,pDoc->name);
	
		
	CView::OnLButtonDown(nFlags, point);
}
