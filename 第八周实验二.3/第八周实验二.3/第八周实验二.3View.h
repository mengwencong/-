
// �ڰ���ʵ���.3View.h : C�ڰ���ʵ���3View ��Ľӿ�
//

#pragma once


class C�ڰ���ʵ���3View : public CView
{
protected: // �������л�����
	C�ڰ���ʵ���3View();
	DECLARE_DYNCREATE(C�ڰ���ʵ���3View)

// ����
public:
	C�ڰ���ʵ���3Doc* GetDocument() const;

// ����
public:
	CRect A;
	CPen pen;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~C�ڰ���ʵ���3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // �ڰ���ʵ���.3View.cpp �еĵ��԰汾
inline C�ڰ���ʵ���3Doc* C�ڰ���ʵ���3View::GetDocument() const
   { return reinterpret_cast<C�ڰ���ʵ���3Doc*>(m_pDocument); }
#endif

