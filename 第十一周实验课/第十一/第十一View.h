
// 第十一View.h : C第十一View 类的接口
//

#pragma once

class C第十一Set;

class C第十一View : public CRecordView
{
protected: // 仅从序列化创建
	C第十一View();
	DECLARE_DYNCREATE(C第十一View)

public:
	enum{ IDD = IDD_MY_FORM };
	C第十一Set* m_pSet;

// 特性
public:
	C第十一Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C第十一View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString number;
	CString name;
};

#ifndef _DEBUG  // 第十一View.cpp 中的调试版本
inline C第十一Doc* C第十一View::GetDocument() const
   { return reinterpret_cast<C第十一Doc*>(m_pDocument); }
#endif

