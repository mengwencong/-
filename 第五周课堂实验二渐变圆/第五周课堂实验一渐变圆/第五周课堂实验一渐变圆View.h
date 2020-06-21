
// 第五周课堂实验一渐变圆View.h : C第五周课堂实验一渐变圆View 类的接口
//

#pragma once


class C第五周课堂实验一渐变圆View : public CView
{
protected: // 仅从序列化创建
	C第五周课堂实验一渐变圆View();
	DECLARE_DYNCREATE(C第五周课堂实验一渐变圆View)

// 特性
public:
	C第五周课堂实验一渐变圆Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	CRect cr1;
	int set;
	int a;
	int b;


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第五周课堂实验一渐变圆View();
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
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 第五周课堂实验一渐变圆View.cpp 中的调试版本
inline C第五周课堂实验一渐变圆Doc* C第五周课堂实验一渐变圆View::GetDocument() const
   { return reinterpret_cast<C第五周课堂实验一渐变圆Doc*>(m_pDocument); }
#endif

