
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
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������ʵ���View ����/����

C������ʵ���View::C������ʵ���View()
{
	// TODO: �ڴ˴���ӹ������

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

void C������ʵ���View::OnDraw(CDC* /*pDC*/)
{
	C������ʵ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
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


void C������ʵ���View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString str;
	str = _T("a+b=3");
	CDC* pDC;
	pDC = GetDC();
	pDC->TextOutW(100, 100, str);
	CView::OnLButtonDown(nFlags, point);
}
