
// �ڰ���ʵ���.4View.h : C�ڰ���ʵ���4View ��Ľӿ�
//

#pragma once


class C�ڰ���ʵ���4View : public CView
{
protected: // �������л�����
	C�ڰ���ʵ���4View();
	DECLARE_DYNCREATE(C�ڰ���ʵ���4View)

// ����
public:
	C�ڰ���ʵ���4Doc* GetDocument() const;

// ����
public:
	CRect A;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ڰ���ʵ���4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onout();
};

#ifndef _DEBUG  // �ڰ���ʵ���.4View.cpp �еĵ��԰汾
inline C�ڰ���ʵ���4Doc* C�ڰ���ʵ���4View::GetDocument() const
   { return reinterpret_cast<C�ڰ���ʵ���4Doc*>(m_pDocument); }
#endif

