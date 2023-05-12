#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<stdlib.h>









//int main()
//{
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//	int(*p[4])(int, int);
//	int(*(*pf)[4])(int, int) = &p;
//}


struct stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}



int main()
{
	/*int arr[10] = { 9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);*/
	/*float f[] = { 9.0,2.0,3.0,7.0 };*/
	struct stu s[3] = { {"zhangsan",20},{"lisi",26},{"wangwu",10} };
	int sz1 = sizeof(s) / sizeof(s[0]);
	int i = 0;
	qsort(s, sz1, sizeof s[0], cmp_stu_by_age);
	/*qsort(arr,sz,sizeof(arr[0]),cmp_int);*/
	/*for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}*/
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", s[i].age);
	}
	return 0;
	
}