
// 第四周实验课View.h : C第四周实验课View 类的接口
//

#pragma once


class C第四周实验课View : public CView
{
protected: // 仅从序列化创建
	C第四周实验课View();
	DECLARE_DYNCREATE(C第四周实验课View)

// 特性
public:
	C第四周实验课Doc* GetDocument() const;

// 操作
public:

	int n;
	CArray<CRect,CRect>cr;
	bool set;


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第四周实验课View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 第四周实验课View.cpp 中的调试版本
inline C第四周实验课Doc* C第四周实验课View::GetDocument() const
   { return reinterpret_cast<C第四周实验课Doc*>(m_pDocument); }
#endif

