#pragma once


// Az 对话框

class Az : public CDialogEx
{
	DECLARE_DYNAMIC(Az)

public:
	Az(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Az();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();	CString s;
};
