// WE.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "WE.h"
#include"math.h"

// ���ǵ���������һ��ʾ��
WE_API int nWE=0;

// ���ǵ���������һ��ʾ����
WE_API int fnWE(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� WE.h
CWE::CWE()
{
    return;
}
float Rad_to_deg = 45.0 / atan(1.0);
WE_API float FAC::convert(float deg)
{

	return   deg / Rad_to_deg;
}