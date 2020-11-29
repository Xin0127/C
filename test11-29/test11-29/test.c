#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
//分割（有错）
int main()
{
	char *p = "zhangpengwei@bitedu.tech";  //20
	const char* sep = ".@";

	int n = strlen(p) + 1;

	char arr[n];
	char *str = NULL;

	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容

	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	{
		printf("%s\n", str);
	}
}
void main()
{
	char str[] = "-, This, a sample-string.";
	char *sep = " ,-";
	char *pch = strtok(str, sep);

	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, sep);
	}
}
/*
//5*5二维数组
#define ROW 5
#define COL 5

void main()
{
	int *ar = (int**)malloc(sizeof(int*)*ROW);//开辟
	if (NULL == ar)
		return;
	for (int i = 0; i < ROW; ++i)
	{
		ar[i] = (int*)malloc(sizeof(int)*COL);//开辟
	}
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j< COL; ++j)
		{
			ar[i][j] = i + j;
		}
	}
}
*/