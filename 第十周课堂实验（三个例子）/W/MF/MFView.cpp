
// MFView.cpp : CMFView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MF.h"
#endif

#include "MFDoc.h"
#include "MFView.h"
#include"��ͷ.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFView

IMPLEMENT_DYNCREATE(CMFView, CView)

BEGIN_MESSAGE_MAP(CMFView, CView)
END_MESSAGE_MAP()

// CMFView ����/����

CMFView::CMFView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFView::~CMFView()
{
}

BOOL CMFView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFView ����

void CMFView::OnDraw(CDC* pDC)
{
	CMFDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s = CString(pchar());
	pDC->TextOutW(200, 150, s);
	CString ss;
	ss.Format(_T("%d, 25222"));
	pDC->TextOutW(200, 150, ss);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFView ���

#ifdef _DEBUG
void CMFView::AssertValid() const
{
	CView::AssertValid();
}

void CMFView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFDoc* CMFView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFDoc)));
	return (CMFDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFView ��Ϣ�������
