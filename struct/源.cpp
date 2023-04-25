#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>

//描述一个学生；一些数据
//名字，年龄，电话，性别
//struct stu
//{   //成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};//s1, s2, s3;//三个全局变量
typedef struct stu//用typedef给这个类型重新起一个名字
{   
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;//类型



//int main()
//{
//	struct stu s1 = { "张三",20,"2132312312","男" };//局部变量,结构体初始化
//	stu s2;
//	return 0;
//
//
//}
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct t
//{
//	char ch[10];
//	struct s s1;
//	char *pc;
//
//};
//int main()
//{
//	char arr[] = "hello world";
//	struct t t1 = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t1.ch);
//	printf("%s\n", t1.s1.arr);
//	return 0;
//}
void print1(stu s)
{
	printf("name:%s\n", s.name);
	printf("age:%d\n", s.age);
}
void print2(stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
}
int main()
{
	stu s = { "李四",40,"123123123","男" };
	print1(s);
	print2(&s);
	return 0;
}