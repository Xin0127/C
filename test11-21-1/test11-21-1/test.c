#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//较大数
int mymax(int n1, int n2)
{
	return(n1 > n2) ? (n1) : (n2);
}
int main()
{
	int n1,n2;
	printf("输入两个数：");
	scanf("%d %d", &n1, &n2);
	printf("两个数的较大值：%d\n", mymax(n1, n2));
	system("pause");
	return 0;
}

/*
//strlen递归
int mystrlen(char *str)
{
	int count = 0;
	while (*str != '\0') {
		str++;
		count++;
	}
	return count;
}

int mystrlen(char *str)
{
	if (*str == '\0') {
		return 0;
	}
	return 1 + mystrlen(str + 1);
}
int main()
{
	printf("%d\n", mystrlen("abc"));
	system("pause");
	return 0;
}
*/
/*
//N阶乘
int factorial(int n)
{
	if (n == 1) {
		return 1;
	}
	return n*factorial(n - 1);
}

int factorial(int n)
{
	int fac = 1;
	for (int i = 1; i <= n; i++) {
		fac *= i;
	}
	return fac;
}

int main()
{
	int n;
	printf("输入一个整数：");
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	system("pause");
	return 0;
}
*/
/*
//整数打印
void print(int n)
{
	if (n < 10) 
	{
		printf("%d ", n % 10);
		return;
	}
	print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n;
	printf("输入打印的整数：");
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}
*/
/*
//乘法表
void tables(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}
	return;
}
int main()
{
	int n;
	printf("输入所需乘法口诀表行数：");
	scanf("%d",&n);
	tables(n);
	system("pause");
	return 0;
}
*/
/*
//互换
void myswap(int *n1, int *n2)
{
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
int main()
{
	int a = 27, b = 14;
	printf("a=%d, b=%d\n", a, b);
	myswap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	system("pause");
	return 0;
}
*/
/*
//闰年
int leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		return 1;
	}
	return 0;
}
int main()
{
	for (int i = 1000; i <= 2000; i++) {
		if (leap_year(i) == 1) {
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
*/
