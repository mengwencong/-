
// �ڰ���ʵ���.2View.cpp : C�ڰ���ʵ���2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڰ���ʵ���.2.h"
#endif

#include "�ڰ���ʵ���.2Doc.h"
#include "�ڰ���ʵ���.2View.h"
#include"A.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڰ���ʵ���2View

IMPLEMENT_DYNCREATE(C�ڰ���ʵ���2View, CView)

BEGIN_MESSAGE_MAP(C�ڰ���ʵ���2View, CView)
	ON_COMMAND(ID_32771, &C�ڰ���ʵ���2View::On32771)
END_MESSAGE_MAP()

// C�ڰ���ʵ���2View ����/����

C�ڰ���ʵ���2View::C�ڰ���ʵ���2View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ڰ���ʵ���2View::~C�ڰ���ʵ���2View()
{
}

BOOL C�ڰ���ʵ���2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڰ���ʵ���2View ����

void C�ڰ���ʵ���2View::OnDraw(CDC* /*pDC*/)
{
	C�ڰ���ʵ���2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ڰ���ʵ���2View ���

#ifdef _DEBUG
void C�ڰ���ʵ���2View::AssertValid() const
{
	CView::AssertValid();
}

void C�ڰ���ʵ���2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڰ���ʵ���2Doc* C�ڰ���ʵ���2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڰ���ʵ���2Doc)));
	return (C�ڰ���ʵ���2Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ڰ���ʵ���2View ��Ϣ�������


void C�ڰ���ʵ���2View::On32771()
{
	A a;
	int t = a.DoModal();
	if (t == IDOK) {
		int r, x, y;
		r = a.X1;
		x = a.X2;
		y = a.X3;
		CRect B(x - r + 1, y - r + 1, x + r, y + r);
		GetDC()->Ellipse(B);
	
	}
	// TODO: �ڴ���������������
}
