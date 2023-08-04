/*
 * @Description: 从键盘输入两个整型数a，b，交换并输出a，b数值。(用指针)
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
    printf("请输入两个整型数:a,b\n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("result a=%d b=%d",a,b);
}