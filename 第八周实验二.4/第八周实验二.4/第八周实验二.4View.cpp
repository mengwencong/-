
// �ڰ���ʵ���.4View.cpp : C�ڰ���ʵ���4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڰ���ʵ���.4.h"
#endif

#include "�ڰ���ʵ���.4Doc.h"
#include "�ڰ���ʵ���.4View.h"
#include"color.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڰ���ʵ���4View

IMPLEMENT_DYNCREATE(C�ڰ���ʵ���4View, CView)

BEGIN_MESSAGE_MAP(C�ڰ���ʵ���4View, CView)
	ON_COMMAND(ID_out, &C�ڰ���ʵ���4View::Onout)
END_MESSAGE_MAP()

// C�ڰ���ʵ���4View ����/����

C�ڰ���ʵ���4View::C�ڰ���ʵ���4View()
{
	A.top = 100;
	A.left = 300;
	A.bottom = 500;
	A.right = 800;
	// TODO: �ڴ˴���ӹ������

}

C�ڰ���ʵ���4View::~C�ڰ���ʵ���4View()
{
}

BOOL C�ڰ���ʵ���4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڰ���ʵ���4View ����

void C�ڰ���ʵ���4View::OnDraw(CDC* pDC)
{
	C�ڰ���ʵ���4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ڰ���ʵ���4View ���

#ifdef _DEBUG
void C�ڰ���ʵ���4View::AssertValid() const
{
	CView::AssertValid();
}

void C�ڰ���ʵ���4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڰ���ʵ���4Doc* C�ڰ���ʵ���4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڰ���ʵ���4Doc)));
	return (C�ڰ���ʵ���4Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ڰ���ʵ���4View ��Ϣ�������


void C�ڰ���ʵ���4View::Onout()
{
	color cp;
	int r = cp.DoModal();
	if (r == IDOK)
	{
		CClientDC dc(this);
		
		dc.Ellipse(A);//
	



	}
	// TODO: �ڴ���������������
}
