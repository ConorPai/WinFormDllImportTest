// cplusplus.cpp : ���� DLL Ӧ�ó���ĵ���������
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