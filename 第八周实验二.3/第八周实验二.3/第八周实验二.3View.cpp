
// �ڰ���ʵ���.3View.cpp : C�ڰ���ʵ���3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڰ���ʵ���.3.h"
#endif

#include "�ڰ���ʵ���.3Doc.h"
#include "�ڰ���ʵ���.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڰ���ʵ���3View

IMPLEMENT_DYNCREATE(C�ڰ���ʵ���3View, CView)

BEGIN_MESSAGE_MAP(C�ڰ���ʵ���3View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C�ڰ���ʵ���3View ����/����

C�ڰ���ʵ���3View::C�ڰ���ʵ���3View()
{
	A.top = 100;
	A.left = 300;
	A.bottom = 500;
	A.right = 800;
	// TODO: �ڴ˴���ӹ������

}

C�ڰ���ʵ���3View::~C�ڰ���ʵ���3View()
{
}

BOOL C�ڰ���ʵ���3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڰ���ʵ���3View ����

void C�ڰ���ʵ���3View::OnDraw(CDC* pDC)
{
	C�ڰ���ʵ���3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ڰ���ʵ���3View ��ӡ

BOOL C�ڰ���ʵ���3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C�ڰ���ʵ���3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C�ڰ���ʵ���3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C�ڰ���ʵ���3View ���

#ifdef _DEBUG
void C�ڰ���ʵ���3View::AssertValid() const
{
	CView::AssertValid();
}

void C�ڰ���ʵ���3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڰ���ʵ���3Doc* C�ڰ���ʵ���3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڰ���ʵ���3Doc)));
	return (C�ڰ���ʵ���3Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ڰ���ʵ���3View ��Ϣ�������


void C�ڰ���ʵ���3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (point.x > 300 && point.x < 800 && point.y>100 && point.y < 500)
	{
		CClientDC dc(this);
		CPen *oldpen;CPen	newpen;
		newpen.CreatePen(PS_DASH, 1, RGB(255, 0, 0));
		oldpen = dc.SelectObject(&newpen);
		CRect B(300, 100, 800, 500);
		GetDC()->Rectangle(B);
		GetDC()->SelectObject(oldpen);
		GetDC()->Ellipse(A);


	}
	CView::OnLButtonDown(nFlags, point);
}
