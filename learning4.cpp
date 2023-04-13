#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>




//int Add(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int z = Add(a, b);
//	printf("%d\n", z);
//}
//int Judge(int x)//判断素数  反过来思考
//{
//	int i = 0;
//	for(i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	int b = 7;
//	a=Judge(b);
//	if (a == 1)
//	{
//		printf("是素数");
//	}
//	else
//	{
//		printf("不是素数");
//	}
//}
int is_leap_year(int x)//判断是否为闰年函数里面不要打印   
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
    for (i = 1000; i <= 2000; i++)
    {
		if (is_leap_year(i) == 1)
			printf("%d ", i);

	}
	return 0;
}