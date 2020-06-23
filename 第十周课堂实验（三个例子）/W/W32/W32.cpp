// W32.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "W32.h"


// 这是导出变量的一个示例
W32_API int nW32=0;

// 这是导出函数的一个示例。
W32_API int fnW32(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 W32.h
CW32::CW32()
{
    return;
}
W32_API int GET() {
	return 2020;

}