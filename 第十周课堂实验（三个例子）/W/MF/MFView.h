
// MFView.h : CMFView ��Ľӿ�
//

#pragma once


class CMFView : public CView
{
protected: // �������л�����
	CMFView();
	DECLARE_DYNCREATE(CMFView)

// ����
public:
	CMFDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFView.cpp �еĵ��԰汾
inline CMFDoc* CMFView::GetDocument() const
   { return reinterpret_cast<CMFDoc*>(m_pDocument); }
#endif

