/*
 * @Description: �Ӽ�����������������a��b�����������a��b��ֵ��(��ָ��)
 * @Author: superx
 * @Date: 2023-08-04 11:33:24
 * @LastEditTime: 2023-08-05 14:35:24
 * @LastEditors: superx
 */
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    printf("����������������:a,b\n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("result a=%d b=%d",a,b);
}