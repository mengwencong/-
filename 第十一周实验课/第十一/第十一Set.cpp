
// ��ʮһSet.cpp : C��ʮһSet ���ʵ��
//

#include "stdafx.h"
#include "��ʮһ.h"
#include "��ʮһSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ʮһSet ʵ��

// ���������� 2020��5��11��, 15:15

IMPLEMENT_DYNAMIC(C��ʮһSet, CRecordset)

C��ʮһSet::C��ʮһSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_nFields = 4;
	m_nDefaultType = snapshot;
}
//#error ��ȫ���⣺�����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C��ʮһSet::GetDefaultConnect()
{
	return _T("DSN=MS Access Database;DBQ=C:\\Users\\cetc416\\Documents\\Database4.accdb;DefaultDir=C:\\Users\\cetc416\\Documents;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C��ʮһSet::GetDefaultSQL()
{
	return _T("[��1]");
}

void C��ʮһSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);

}
/////////////////////////////////////////////////////////////////////////////
// C��ʮһSet ���

#ifdef _DEBUG
void C��ʮһSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void C��ʮһSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

