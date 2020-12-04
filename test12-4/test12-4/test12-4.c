#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <time.h>
#include <windows.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针

#include <stdio.h>
int main()
{
int i = 1;
int ret = (++i) + (++i) + (++i);
printf("ret = %d\n", ret);
system("pause");
return 0;
}

/*
#include <stdio.h>
int i;//全局变量若不进行初始化赋值，则默认为0
int main()
{
i--; // -1
if (i > sizeof(i))//sizeof返回的数据是一个无符号数据
{
printf(">\n");
}
else
{
printf("<\n");
}
system("pause");
return 0;
}
*/
/*
//交换两个变量（不创建临时变量）
int main()
{
int a = 20;
int b = 30;
a = a ^ b;
b = a ^ b;
a = a ^ b;
printf("%d-%d\n", a, b);
system("pause");
return 0;
}
*/
/*
//打印整数二进制的奇数位和偶数位
int main()
{
int a = 45676;
for (int i = 31; i > 0; i -= 2) {
printf("%d ", (a >> i) & 1);
}
printf("\n");
for (int i = 30; i >= 0; i -= 2) {
printf("%d ", (a >> i) & 1);
}
system("pause");
return 0;
}
*/
/*
//统计二进制中1的个数
int binary_count(int num)
{
int count = 0;
while (num) {
num = num & (num - 1);
count++;
}
return count;
}
//求两个数二进制中不同位的个数

int main()
{
int a = 20;
int b = 100;
int tmp = a ^ b;//异或：二进制位相同则为0，不同则为1
printf("%d\n", binary_count(tmp));
system("pause");
return 0;
}
*/