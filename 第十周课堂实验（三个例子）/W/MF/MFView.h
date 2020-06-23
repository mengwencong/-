
// MFView.h : CMFView 类的接口
//

#pragma once


class CMFView : public CView
{
protected: // 仅从序列化创建
	CMFView();
	DECLARE_DYNCREATE(CMFView)

// 特性
public:
	CMFDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFView.cpp 中的调试版本
inline CMFDoc* CMFView::GetDocument() const
   { return reinterpret_cast<CMFDoc*>(m_pDocument); }
#endif

