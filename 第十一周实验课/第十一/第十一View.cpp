
// ��ʮһView.cpp : C��ʮһView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ʮһ.h"
#endif

#include "��ʮһSet.h"
#include "��ʮһDoc.h"
#include "��ʮһView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ʮһView

IMPLEMENT_DYNCREATE(C��ʮһView, CRecordView)

BEGIN_MESSAGE_MAP(C��ʮһView, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// C��ʮһView ����/����

C��ʮһView::C��ʮһView()
	: CRecordView(C��ʮһView::IDD)
	, ID(0)
	, number(_T(""))
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO:  �ڴ˴���ӹ������

}

C��ʮһView::~C��ʮһView()
{
}

void C��ʮһView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_2);
}

BOOL C��ʮһView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C��ʮһView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_��ʮһSet;
	CRecordView::OnInitialUpdate();

}


// C��ʮһView ��ӡ

BOOL C��ʮһView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C��ʮһView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C��ʮһView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// C��ʮһView ���

#ifdef _DEBUG
void C��ʮһView::AssertValid() const
{
	CRecordView::AssertValid();
}

void C��ʮһView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C��ʮһDoc* C��ʮһView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ʮһDoc)));
	return (C��ʮһDoc*)m_pDocument;
}
#endif //_DEBUG


// C��ʮһView ���ݿ�֧��
CRecordset* C��ʮһView::OnGetRecordset()
{
	return m_pSet;
}



// C��ʮһView ��Ϣ�������
