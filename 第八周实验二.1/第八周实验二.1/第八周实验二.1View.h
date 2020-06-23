
// 第八周实验二.1View.h : C第八周实验二1View 类的接口
//

#pragma once


class C第八周实验二1View : public CView
{
protected: // 仅从序列化创建
	C第八周实验二1View();
	DECLARE_DYNCREATE(C第八周实验二1View)

// 特性
public:
	C第八周实验二1Doc* GetDocument() const;

// 操作
public:
	int x1;int y1;
	int x2;int y2;
	CRect a;
	int flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第八周实验二1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第八周实验二.1View.cpp 中的调试版本
inline C第八周实验二1Doc* C第八周实验二1View::GetDocument() const
   { return reinterpret_cast<C第八周实验二1Doc*>(m_pDocument); }
#endif

