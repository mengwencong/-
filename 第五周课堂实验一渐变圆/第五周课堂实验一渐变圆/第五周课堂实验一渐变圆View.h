
// �����ܿ���ʵ��һ����ԲView.h : C�����ܿ���ʵ��һ����ԲView ��Ľӿ�
//

#pragma once


class C�����ܿ���ʵ��һ����ԲView : public CView
{
protected: // �������л�����
	C�����ܿ���ʵ��һ����ԲView();
	DECLARE_DYNCREATE(C�����ܿ���ʵ��һ����ԲView)

// ����
public:
	C�����ܿ���ʵ��һ����ԲDoc* GetDocument() const;

// ����
public:
	CRect cr;
	CRect cr1;
	int set;
	int a;
	int b;


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�����ܿ���ʵ��һ����ԲView();
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
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // �����ܿ���ʵ��һ����ԲView.cpp �еĵ��԰汾
inline C�����ܿ���ʵ��һ����ԲDoc* C�����ܿ���ʵ��һ����ԲView::GetDocument() const
   { return reinterpret_cast<C�����ܿ���ʵ��һ����ԲDoc*>(m_pDocument); }
#endif

