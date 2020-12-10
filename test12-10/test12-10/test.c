#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
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
	char *pret = my_strcpy(str1, str2);
	printf("str1=%s\n", str1);
	return 0;
}
/*
int my_strcmp(const char *string1, const char *string2)
{
	assert(string1 != NULL && string2 != NULL);
	const char *ps1 = string1;
	const char *ps2 = string2;
	int ret = 0;
	while (*ps1 != '\0' || *ps2 != '\0')
	{
		if (*ps1 - *ps2 != 0)
			break;
		ps1++;
		ps2++;
	}
	ret = *ps1 - *ps2;
	return ret;
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
}*/
/*
char *my_strcat(char *strDest, const char*strSrc)
{
	assert(strDest != NULL&&strSrc != NULL);//检查
	char *pDest = strDest;
	const char *pSrc = strSrc;//保护
	while (*pDest != '\0')
		pDest++;
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
	printf("str2 = %s\n", str2);
	char *pret = my_strcat(str1, str2);
	//printf("str1 = %s\n", str1);
	printf("str1 = %s\n", pret);
}*/
/*
void main()
{
	char *str1 = "xin0127";
	//char *str2 = ""; //ret=xin0127
	//char *str2 = "in6"; //str2 不存在.
	char *str2 = "in";//ret=in0127
	char *ret = strstr(str1, str2);
	if (ret != NULL)
		printf("ret = %s\n", ret);
	else
		printf("str2 不存在.\n");
}
*/
/*
//模拟实现memcpy
void* my_memcpy(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char *pdest = (char *)dest;
	const char *psrc = (const char *)src;
	while (count-- > 0)
	{
		*pdest++ = *psrc++;
	}
	return dest;
}
void main()
{
	char str[20];
	char *str1 = "xin0127";
	my_memcpy(str, str1, strlen(str1) + 1);
	printf("str = %s\n", str);
}*/
/*
//模拟实现memmove
void* my_memmove(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char *pdest = (char *)dest;
	const char *psrc = (const char *)src;
	while (count-- > 0)
	{
		*pdest++ = *psrc++;
	}
	return dest;
}
void main()
{
	char str[20] = "abcdefghijk";
	printf("str = %s\n", str);
	memmove(str + 2, str, 4);
	printf("str = %s\n", str);
}*/