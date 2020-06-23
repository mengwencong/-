// WE.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "WE.h"
#include"math.h"

// 这是导出变量的一个示例
WE_API int nWE=0;

// 这是导出函数的一个示例。
WE_API int fnWE(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 WE.h
CWE::CWE()
{
    return;
}
float Rad_to_deg = 45.0 / atan(1.0);
WE_API float FAC::convert(float deg)
{

	return   deg / Rad_to_deg;
}