
// 第五周实验三View.h : C第五周实验三View 类的接口
//

#pragma once


class C第五周实验三View : public CView
{
protected: // 仅从序列化创建
	C第五周实验三View();
	DECLARE_DYNCREATE(C第五周实验三View)

// 特性
public:
	C第五周实验三Doc* GetDocument() const;

// 操作
public:
	int x1;
	int x2;
	int y1;
	int y2;
	CPoint start;
	int n;
	CRect A;
	int flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第五周实验三View();
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
	afx_msg void On32772();
	afx_msg void On32773();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第五周实验三View.cpp 中的调试版本
inline C第五周实验三Doc* C第五周实验三View::GetDocument() const
   { return reinterpret_cast<C第五周实验三Doc*>(m_pDocument); }
#endif

