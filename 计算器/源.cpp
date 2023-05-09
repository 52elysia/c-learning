#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>

void menu()
{
	printf("***************************\n");
	printf("** 1.add********** 2.sub **\n");
	printf("** 3.mul********** 4.div **\n");
	printf("**      0.exit           **\n");
}

int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*parr[5])(int, int) = { 0,add,sub,mul,div };
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入操作数:>");
			scanf("%d%d", &x,&y);
			int ret = parr[input](x,y);
			//printf("%d\n", parr[input](x, y));
			printf("%d\n",ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);

	///*int i = 0;
	//int(*parr[4])(int, int) = { add ,sub,mul,div};
	//for (i = 0;i < 4; i++)
	//{
	//	printf("%d\n", parr[i](3, 2));
	//*/}
	return 0;
}