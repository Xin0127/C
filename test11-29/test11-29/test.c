#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
//�ָ�д�
int main()
{
	char *p = "zhangpengwei@bitedu.tech";  //20
	const char* sep = ".@";

	int n = strlen(p) + 1;

	char arr[n];
	char *str = NULL;

	strcpy(arr, p);//�����ݿ���һ�ݣ�����arr���������

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
//5*5��ά����
#define ROW 5
#define COL 5

void main()
{
	int *ar = (int**)malloc(sizeof(int*)*ROW);//����
	if (NULL == ar)
		return;
	for (int i = 0; i < ROW; ++i)
	{
		ar[i] = (int*)malloc(sizeof(int)*COL);//����
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