// cplusplus.cpp : 定义 DLL 应用程序的导出函数。
//

#include "cplusplus.h"

int CTestAdd::Add(int a, int b)
{
	return a + b;
}

int TestAdd(int a, int b)
{
	CTestAdd add;
	return add.Add(a, b);
}