
// ��һ��ʵ���һ��View.h : C��һ��ʵ���һ��View ��Ľӿ�
//

#pragma once


class C��һ��ʵ���һ��View : public CView
{
protected: // �������л�����
	C��һ��ʵ���һ��View();
	DECLARE_DYNCREATE(C��һ��ʵ���һ��View)

// ����
public:
	C��һ��ʵ���һ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��һ��ʵ���һ��View();
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

#ifndef _DEBUG  // ��һ��ʵ���һ��View.cpp �еĵ��԰汾
inline C��һ��ʵ���һ��Doc* C��һ��ʵ���һ��View::GetDocument() const
   { return reinterpret_cast<C��һ��ʵ���һ��Doc*>(m_pDocument); }
#endif

