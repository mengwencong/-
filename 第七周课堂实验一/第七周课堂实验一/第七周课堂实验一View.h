
// 第七周课堂实验一View.h : C第七周课堂实验一View 类的接口
//

#pragma once


class C第七周课堂实验一View : public CView
{
protected: // 仅从序列化创建
	C第七周课堂实验一View();
	DECLARE_DYNCREATE(C第七周课堂实验一View)

// 特性
public:
	C第七周课堂实验一Doc* GetDocument() const;

// 操作
public:

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
	virtual ~C第七周课堂实验一View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第七周课堂实验一View.cpp 中的调试版本
inline C第七周课堂实验一Doc* C第七周课堂实验一View::GetDocument() const
   { return reinterpret_cast<C第七周课堂实验一Doc*>(m_pDocument); }
#endif

