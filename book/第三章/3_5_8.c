/*
 * @Description: �ֱ���getchar()��scanf()��������2����ͬ���ַ����� putchar()��printf()
    �������������ַ�������Ƚ��⼸���������ַ������Ĳ�ͬ��
 * @Author: superx
 * @Date: 2023-07-15 22:18:56
 * @LastEditTime: 2023-07-15 22:27:12
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    char a,b;
    a=getchar();
    putchar(a);
    scanf("\n%c",&b);
    printf(" %c",b);
    return 0;
}