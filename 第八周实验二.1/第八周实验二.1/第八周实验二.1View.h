
// �ڰ���ʵ���.1View.h : C�ڰ���ʵ���1View ��Ľӿ�
//

#pragma once


class C�ڰ���ʵ���1View : public CView
{
protected: // �������л�����
	C�ڰ���ʵ���1View();
	DECLARE_DYNCREATE(C�ڰ���ʵ���1View)

// ����
public:
	C�ڰ���ʵ���1Doc* GetDocument() const;

// ����
public:
	int x1;int y1;
	int x2;int y2;
	CRect a;
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ڰ���ʵ���1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // �ڰ���ʵ���.1View.cpp �еĵ��԰汾
inline C�ڰ���ʵ���1Doc* C�ڰ���ʵ���1View::GetDocument() const
   { return reinterpret_cast<C�ڰ���ʵ���1Doc*>(m_pDocument); }
#endif

