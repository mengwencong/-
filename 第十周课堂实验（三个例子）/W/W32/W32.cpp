// W32.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W32.h"


// ���ǵ���������һ��ʾ��
W32_API int nW32=0;

// ���ǵ���������һ��ʾ����
W32_API int fnW32(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W32.h
CW32::CW32()
{
    return;
}
W32_API int GET() {
	return 2020;

}