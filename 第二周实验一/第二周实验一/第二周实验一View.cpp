
// �ڶ���ʵ��һView.cpp : C�ڶ���ʵ��һView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڶ���ʵ��һ.h"
#endif

#include "�ڶ���ʵ��һDoc.h"
#include "�ڶ���ʵ��һView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڶ���ʵ��һView

IMPLEMENT_DYNCREATE(C�ڶ���ʵ��һView, CView)

BEGIN_MESSAGE_MAP(C�ڶ���ʵ��һView, CView)
END_MESSAGE_MAP()

// C�ڶ���ʵ��һView ����/����

C�ڶ���ʵ��һView::C�ڶ���ʵ��һView()
{
	// TODO: �ڴ˴���ӹ������

}

C�ڶ���ʵ��һView::~C�ڶ���ʵ��һView()
{
}

BOOL C�ڶ���ʵ��һView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڶ���ʵ��һView ����

void C�ڶ���ʵ��һView::OnDraw(CDC* pDC)
{
	C�ڶ���ʵ��һDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString S =_T("����***");
	int a = 123;
	CString s;
	s.Format(_T("%d"), a);
	
	pDC->TextOut(50, 100, S+s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ڶ���ʵ��һView ���

#ifdef _DEBUG
void C�ڶ���ʵ��һView::AssertValid() const
{
	CView::AssertValid();
}

void C�ڶ���ʵ��һView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڶ���ʵ��һDoc* C�ڶ���ʵ��һView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڶ���ʵ��һDoc)));
	return (C�ڶ���ʵ��һDoc*)m_pDocument;
}
#endif //_DEBUG


// C�ڶ���ʵ��һView ��Ϣ�������
