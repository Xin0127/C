#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <time.h>
#include <windows.h>

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��

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
int i;//ȫ�ֱ����������г�ʼ����ֵ����Ĭ��Ϊ0
int main()
{
i--; // -1
if (i > sizeof(i))//sizeof���ص�������һ���޷�������
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
//����������������������ʱ������
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
//��ӡ���������Ƶ�����λ��ż��λ
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
//ͳ�ƶ�������1�ĸ���
int binary_count(int num)
{
int count = 0;
while (num) {
num = num & (num - 1);
count++;
}
return count;
}
//���������������в�ͬλ�ĸ���

int main()
{
int a = 20;
int b = 100;
int tmp = a ^ b;//��򣺶�����λ��ͬ��Ϊ0����ͬ��Ϊ1
printf("%d\n", binary_count(tmp));
system("pause");
return 0;
}
*/