
// 第八周实验二.2View.h : C第八周实验二2View 类的接口
//

#pragma once


class C第八周实验二2View : public CView
{
protected: // 仅从序列化创建
	C第八周实验二2View();
	DECLARE_DYNCREATE(C第八周实验二2View)

// 特性
public:
	C第八周实验二2Doc* GetDocument() const;

// 操作
public:
	CRect B;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第八周实验二2View();
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
};

#ifndef _DEBUG  // 第八周实验二.2View.cpp 中的调试版本
inline C第八周实验二2Doc* C第八周实验二2View::GetDocument() const
   { return reinterpret_cast<C第八周实验二2Doc*>(m_pDocument); }
#endif

