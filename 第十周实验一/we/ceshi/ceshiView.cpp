
// ceshiView.cpp : CceshiView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ceshi.h"
#endif

#include "ceshiDoc.h"
#include "ceshiView.h"
#include"sd.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CceshiView

IMPLEMENT_DYNCREATE(CceshiView, CView)

BEGIN_MESSAGE_MAP(CceshiView, CView)
END_MESSAGE_MAP()

// CceshiView ����/����

CceshiView::CceshiView()
{
	// TODO: �ڴ˴���ӹ������

}

CceshiView::~CceshiView()
{
}

BOOL CceshiView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CceshiView ����

void CceshiView::OnDraw(CDC* pDC)
{
	CceshiDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	int n = 5;
	int a = Factorial(5);
	if (a == 0)
	{
		pDC->TextOutW(200, 180, _T("n��ֵ�������0"));
	}
	if (a == -1)
	{
		pDC->TextOutW(200, 180, _T("n�Ľ׳˽�����"));
	}
	if (a != 0 && a != -1)
	{
		s.Format(_T("%d�Ľ׳�Ϊ%d"), n, a);
		pDC->TextOutW(200, 100, s);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CceshiView ���

#ifdef _DEBUG
void CceshiView::AssertValid() const
{
	CView::AssertValid();
}

void CceshiView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CceshiDoc* CceshiView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CceshiDoc)));
	return (CceshiDoc*)m_pDocument;
}
#endif //_DEBUG


// CceshiView ��Ϣ�������
