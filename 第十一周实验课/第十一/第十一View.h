
// ��ʮһView.h : C��ʮһView ��Ľӿ�
//

#pragma once

class C��ʮһSet;

class C��ʮһView : public CRecordView
{
protected: // �������л�����
	C��ʮһView();
	DECLARE_DYNCREATE(C��ʮһView)

public:
	enum{ IDD = IDD_MY_FORM };
	C��ʮһSet* m_pSet;

// ����
public:
	C��ʮһDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~C��ʮһView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString number;
	CString name;
};

#ifndef _DEBUG  // ��ʮһView.cpp �еĵ��԰汾
inline C��ʮһDoc* C��ʮһView::GetDocument() const
   { return reinterpret_cast<C��ʮһDoc*>(m_pDocument); }
#endif

