#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
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
	int a = 0x11223344; //�ֽ��򣺴�ˣ���-�ߣ���С�ˣ���-�ͣ���cpu���ڴ������ֽ�Ϊ��λ���д�ȡ��˳��
	char *pc = (char*)&a; //�׵�ַ��Ϊ0
	*pc = 0;
	printf("%x\n", a);
	return 0;
}
*/
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	short *p = (short*)arr;//һ��Ϊ��
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