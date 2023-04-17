#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>

//隐式类型转换
int main()
{
	char a = 3;//发生截断00000011 - a
	char b = 127;
	//00000000000000000000000001111111
	//01111111  - b
	//a b如何相加？
	//a，b整形提升根据变量的数据类型的符号位来提升符号位为0全补0
	//符号位为1全补1，转换类型计算提高精度然后在截断放入字符c中
	char c = a + b;
	printf("%d\n", c);
	//此处还要发生一次整型提升
	return 0;
}