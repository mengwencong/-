// wq.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "wq.h"


// ���ǵ���������һ��ʾ��
WQ_API int nwq=0;

// ���ǵ���������һ��ʾ����
WQ_API int fnwq(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� wq.h
Cwq::Cwq()
{
    return;
}
WQ_API int Factorial(int n) {

	int num = 1;
	if (n <= 0)  return 0;
	if (n >= 17) return -1;
	for (int i = 1; i <= n; i++)
	{
		num *= i;
	}
	return num;
}
