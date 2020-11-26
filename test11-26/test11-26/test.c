#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//模拟实现strcmp
int my_strcmp(const char *string1, const char *string2)
{
	assert(string1 != NULL && string2 != NULL);
	const char *ps1 = string1;
	const char *ps2 = string2;

	while (*ps1 != '\0' && *ps2 != '\0')
	{
		if (*ps1 > *ps2)
			return 1;
		else if (*ps1 < *ps2)
			return -1;
		ps1++;
		ps2++;
	}

	if (*ps1 != '\0')
		return 1;
	if (*ps2 != '\0')
		return -1;
	return 0;
}

void main()
{
	char *str1 = "Xin";
	char *str2 = "Xin0127";

	int ret = my_strcmp(str1, str2); 

	if (ret == 0)
		printf("str1 == str2\n");
	else if (ret < 0)
		printf("str1 < str2\n");
	else
		printf("str1 > str2\n");
}
/*
//模拟实现strcat
char *my_strcat(char *strDest, const char*strSrc)
{
	assert(strDest != NULL&&strSrc != NULL);//检查
	char *pDest = strDest;
	const char *pSrc = strSrc;//保护
	while (*pDest != '\0')
		pDest++ ;
	while (*pSrc != '\0')
	{
		*pDest++ = *pSrc++;
	}
	*pDest = '\0';
	return  strDest;
}
void main()
{
	char str1[20] = "Good ";
	char *str2 = "luck!";
	printf("str1 = %s\n", str1);
	char *pret = my_strcat(str1, str2);
	//printf("str1 = %s\n", str1);
	printf("str1 = %s\n", pret);

}
*/
/*
//入参 出参
void fun(int *v,int a, int b)//入参
{
	*v = a + b;//v：出参
}
void main()
{
	int v;
	int x = 10;
	fun(&v,x, 20);
	printf("v=%d\n", v);
}

int fun(int a, int b)//入参
{
	int v = a + b;
	a = 127;
	return v;
}
void main()
{
	int x = 10;
	fun(x, 20);
	printf("x=%d\n", x);
}
*/
/*
//模拟实现strcpy
char *my_strcpy(char *strDest, const char*strSrc)
{
	assert(strDest != NULL&&strSrc != NULL);//检查
	char *pDest = strDest;
	char *pSrc = strSrc;//保护
	while (*pDest != '\0')
	{
		*pDest++ = *pSrc++;
	}
	*pDest = '\0';
	return *strDest;
}
void main()
{
	char str1[] = "Xin0127";
	char *str2 = "XZG104";
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	char *pret = strcpy(str1, str2);
	printf("str1=%s\n", str1);
	return 0;
}
*/
/*
//模拟实现strlen
size_t my_strlen(const char *string)
{
	assert(string != NULL);
	size_t len = 0;
	const char *p_str = string;

	while (*p_str++ != '\0')
	{
		len++;
	}
	return len;
}

size_t my_strlen(const char *string)
{
if (*string == '\0')
return 0;
else
return my_strlen(string + 1) + 1;
}

void main()
{
	char *str = "xinxin";
	printf("len = %d\n", my_strlen(str));
}
*/