
// ceshiView.h : CceshiView 类的接口
//

#pragma once


class CceshiView : public CView
{
protected: // 仅从序列化创建
	CceshiView();
	DECLARE_DYNCREATE(CceshiView)

// 特性
public:
	CceshiDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CceshiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ceshiView.cpp 中的调试版本
inline CceshiDoc* CceshiView::GetDocument() const
   { return reinterpret_cast<CceshiDoc*>(m_pDocument); }
#endif

