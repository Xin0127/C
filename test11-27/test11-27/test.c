#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针
void print(int arr[],int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", *(arr + 1));
	}
}
int main()
{
	int arry[] = { 1, 2, 3, 4, 5, 6, 7, 8, 10, 9 };
	print(arry,sizeof(arry));
	system("pause");
	return 0;
}
/*
int main()
{
	int a = 0x11223344; //字节序：大端（低-高），小端（低-低），cpu在内存中以字节为单位进行存取的顺序
	char *pc = (char*)&a; //首地址赋为0
	*pc = 0;
	printf("%x\n", a);
	return 0;
}
*/
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	short *p = (short*)arr;//一分为二
	int i = 0;
	for (i = 0; i<4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
*/