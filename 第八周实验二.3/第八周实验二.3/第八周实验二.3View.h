
// 第八周实验二.3View.h : C第八周实验二3View 类的接口
//

#pragma once


class C第八周实验二3View : public CView
{
protected: // 仅从序列化创建
	C第八周实验二3View();
	DECLARE_DYNCREATE(C第八周实验二3View)

// 特性
public:
	C第八周实验二3Doc* GetDocument() const;

// 操作
public:
	CRect A;
	CPen pen;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C第八周实验二3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第八周实验二.3View.cpp 中的调试版本
inline C第八周实验二3Doc* C第八周实验二3View::GetDocument() const
   { return reinterpret_cast<C第八周实验二3Doc*>(m_pDocument); }
#endif

