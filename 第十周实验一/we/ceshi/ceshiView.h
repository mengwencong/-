
// ceshiView.h : CceshiView ��Ľӿ�
//

#pragma once


class CceshiView : public CView
{
protected: // �������л�����
	CceshiView();
	DECLARE_DYNCREATE(CceshiView)

// ����
public:
	CceshiDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CceshiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ceshiView.cpp �еĵ��԰汾
inline CceshiDoc* CceshiView::GetDocument() const
   { return reinterpret_cast<CceshiDoc*>(m_pDocument); }
#endif

