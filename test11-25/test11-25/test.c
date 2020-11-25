#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//Ä£ÄâÊµÏÖstrlen

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
/*
size_t my_strlen(const char *string)
{
	if (*string == '\0')
		return 0;
	else
		return my_strlen(string + 1) + 1;
}
*/
void main()
{
	char *str = "xinxin";
	printf("len = %d\n", my_strlen(str));
}

//