#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<errno.h>
/**/
//出现内存重叠，使用memmove
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
}

/*
//模拟实现memcmp
int my_memcmp(const void *buf1, const void *buf2, size_t count)
{
	assert(buf1 != NULL && buf2 != NULL);
	const char *pbuf1 = (const char *)buf1;
	const char *pbuf2 = (const char *)buf2;
	while (count-- > 0)
	{
		if (*pbuf1 - *pbuf2 != 0)
			break;
		pbuf1++;
		pbuf2++;
	}
	return (*pbuf1 - *pbuf2);
}
void main()
{
	char str[20];
	char *str1 = "xin0127";
	int flag = my_memcmp(str, str1, strlen(str1));
	if (flag == 0)
		printf("str == str1\n");
	else if (flag < 0)
		printf("str< str1\n");
	else
		printf("str > str1\n");
}
*/
/*
//模拟实现memcpy
//出现内存重叠
void* my_memcpy(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char *pdest = (char *)dest;
	const char *psrc = (const char *)src;

	if (psrc >= pdest || pdest >= psrc + count)
	{
		while (count-- > 0)
		{
			*pdest++ = *psrc++;
		}
	}
	else
	{
		//存在内存重叠
		psrc = psrc + count - 1;
		pdest = pdest + count - 1;
		while (count-- > 0)
		{
			*pdest-- = *psrc--;
		}
	}
	return dest;
}
void main()
{
	char str[20] = "abcdefghijk";
	printf("str = %s\n", str);
	my_memcpy(str + 2, str, 4); 
	printf("str = %s\n", str);
}

//不考虑内存重叠时
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
//在同一个字符串中进行拷贝
void main()
{
	char str[20] = "abcdefghijk";
	printf("str = %s\n", str);
	my_memcpy(str, str+3, 4); //str = defgefghijk
	//my_memcpy(str+4, str, 2);//str = abcdabghijk
	printf("str = %s\n", str);
}
//不同
void main()
{
	char str[20];
	char *str1 = "xin0127";
	my_memcpy(str, str1, strlen(str1) + 1);
	printf("str = %s\n", str);
}
*/
/*
//模拟实现memset
void* my_memset(void *dest, int c, size_t count)
{
	assert(dest != NULL);
	char *pdest = (char *)dest;

	while (count-- > 0)
	{
		*pdest++ = c;
	}
	return dest;
}
void main()
{
	char str[20];
	my_memset(str, 0, sizeof(str));
}
*/
/*
//字符转换 小写-大写
void my_to_upper(char *str)
{
	assert(str != NULL);
	while (*str != '\0')
	{
		if (islower(*str))
			//if(*str>='a' && *str<='z')
			*str -= 32;
		str++;
	}
}
void main()
{
	char str[] = "Xinxin";
	printf("str = %s\n", str);
	my_to_upper(str);
	printf("str = %s\n", str);
}
*/
/*
//strerror函数
void main()
{
	FILE *fp = fopen("Test.txt", "r");
	if (fp == NULL)
	{
		//printf("Open File Error.\n");
		printf("errno = %d\n", errno);
		char *err_msg = strerror(errno);
		printf("err_msg = %s\n", err_msg);
		return;
	}
}
*/
/*
//strstr函数
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
//模拟实现strncpy
char *my_strncpy(char *strDest, const char*strSrc, size_t count)
{
	assert(strDest != NULL&&strSrc != NULL);
	char *pDest = strDest;
	char *pSrc = strSrc;
	while (count-- > 0)
	{
		*pDest++ = *pSrc++;
	}
	*pDest = '\0';  //XZG
	//不添加'\0' 运行结果为 XZG0127
	return *strDest;
}
void main()
{
	char str1[] = "Xin0127";
	char *str2 = "XZG104";
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	char *pret = my_strncpy(str1, str2,3);
	printf("str1=%s\n", str1);
	return 0;
}
*/
/*
//模拟实现strncat
char *my_strncat(char *strDest, const char *strSrc, size_t count)
{
	assert(strDest != NULL && strSrc != NULL);
	char *pDest = strDest;
	const char *pSrc = strSrc;
	while (*pDest != '\0')
		pDest++;
	while (count-- > 0)
	{
		*pDest++ = *pSrc++;
	}
	*pDest = '\0';
	return strDest;
}
void main()
{
	char str1[20] = "Good ";
	char *str2 = "luck!";
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	char *pret = my_strncat(str1, str2, 3);   
	//printf("str1 = %s\n", str1);
	printf("str1 = %s\n", pret);
}
*/
/*
//模拟实现strncmp
int my_strncmp(const char *string1, const char *string2, size_t count)
{
	assert(string1 != NULL && string2 != NULL);
	const char *ps1 = string1;
	const char *ps2 = string2;
	int ret = 0;
	while (--count > 0)
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
	//int ret = my_strncmp(str1, str2, 3); //str1==str2
	int ret = my_strncmp(str1, str2, 6); //str1 < str2
	if (ret == 0)
		printf("str1 == str2");
	else if (ret < 0)
		printf("str1 < str2");
	else
		printf("str1 > str2");
}
*/
/*
//模拟实现strcmp
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
}
*/
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
	printf("str2 = %s\n", str2);
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
	char *pret = my_strcpy(str1, str2);
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