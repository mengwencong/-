
// ��ʮһDoc.h : C��ʮһDoc ��Ľӿ�
//


#pragma once
#include "��ʮһSet.h"


class C��ʮһDoc : public CDocument
{
protected: // �������л�����
	C��ʮһDoc();
	DECLARE_DYNCREATE(C��ʮһDoc)

// ����
public:
	C��ʮһSet m_��ʮһSet;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~C��ʮһDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
