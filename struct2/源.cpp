#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>



//#pragma pack(4)//设置默认对齐数
//typedef struct stu
//{
//	char c1;
//	int a;
//	char c2;
//}stu;
//#pragma pack()//取消默认对齐数
//
//typedef struct people
//{
//	char c1;
//	char c2;
//	int a;
//}people;
//
//int main()
// {
//	 people s1 = { 0 };
//	 stu s2= { 0 };
//	 printf("%zu\n%zu\n", sizeof(s1), sizeof(s2));
//	 return 0;
// }

struct stu//结构体传参
{
	char a;
	char b;
	double c;
};
void inint(struct stu* ps)
{
	ps->a = 100;
	ps->c = 20;
	ps->c = 3.14;
}
int main()
{
	struct stu s = { 0 };
	inint(&s);
	printf("%d\n", s.a);
	return 0;
}
