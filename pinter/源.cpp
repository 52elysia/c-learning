#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>

int main()
{
	float a = 0x11223344;
	//int* p = &a;//指针变量
	//return 0;
	//指针的大小仅和操作平台有关系
	//char* pc = NULL;
	//int* p = NULL;//null表示0
	//printf("%zu\n", sizeof(pc));//sizeof()返回值是一个无符号数所以用%zu
	//printf("%zu\n", sizeof(p));
	//return 0;
	//指针进行解引用和加减计算是指针类型设置不同表达结果不同
	//int*和float*不能通用
	float* p = &a;
	*p = 0;
}
