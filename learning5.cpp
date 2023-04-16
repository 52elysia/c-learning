#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//int main()
//{
//	double a = 5 / 2.0;
//	printf("%lf\n", a);//lf 打印浮点数
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	int c = a << 1;
//	printf("%d\n%d\n", b,c);
//	return 0;
//		
//
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n%d\n%d\n", c, d, e);
//	return 0;
//}
//不使用临时变量交换俩个int变量的值
int main()
{

	//int a = 5;
	//int b = 3;
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;//不会溢出
	////a = a + b;
	////b = a - b;
	////a = a - b;
	//printf("%d %d", a, b);///可能会溢出
	//计算二进制中1的个数
	//int count = 0;
	//int num = 0;
	//scanf("%d", &num);
	///*while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}
	//printf("%d\n", count);
	//return 0;*/
	//int i = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if (1 == ((num >> 1) & 1))
	//		count++;
	//}
	//printf("%d\n", count);
	//return 0; 
	/*int a = (int)3.14;//强制转换
	printf("%d\n", a);
	return 0;*/
	//题目
	/*int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
	return 0;*/
	//逻辑与左边如果计算的是假后面的就不再计算了
	//逻辑或左边如果为假后面的就不用计算了
	//条件操作符 三木操作符
	int a = 0;
	int b = 0;
	if (a > 5)
	{
		b = 3;
	}
	else
	{
		b = -3;
	}
	printf("%d\n", b);
	b = (a > 5 ? b = 3 : b = -3);
	printf("%d\n", b);
	return 0;
}
