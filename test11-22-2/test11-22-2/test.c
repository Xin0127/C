#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//×Ö·û´®×Ö·û»¥»»(strcpy)
char *my_strcpy(char *strDest, const char*strSrc)
{
	assert(strDest != NULL&&strSrc != NULL);//¼ì²éº¯Êý
	char *pDest = strDest;
	char *pSrc = strSrc; //±£»¤
	while (*pDest != '\0')
	{
		*pDest++=*pSrc++;
	}
	*pDest = '\0';
	return *strDest;
}
void main()
{
	char str1[] = "hello";
	char *str2 = "Bit";
	printf("str1=%s\n", str1);
	char *pret = strcpy(str1, str2);
	printf("str1=%s\n", str1);
	return 0;
}