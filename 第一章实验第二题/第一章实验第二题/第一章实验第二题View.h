
// ��һ��ʵ��ڶ���View.h : C��һ��ʵ��ڶ���View ��Ľӿ�
//

#pragma once


class C��һ��ʵ��ڶ���View : public CView
{
protected: // �������л�����
	C��һ��ʵ��ڶ���View();
	DECLARE_DYNCREATE(C��һ��ʵ��ڶ���View)

// ����
public:
	C��һ��ʵ��ڶ���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��һ��ʵ��ڶ���View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��һ��ʵ��ڶ���View.cpp �еĵ��԰汾
inline C��һ��ʵ��ڶ���Doc* C��һ��ʵ��ڶ���View::GetDocument() const
   { return reinterpret_cast<C��һ��ʵ��ڶ���Doc*>(m_pDocument); }
#endif

