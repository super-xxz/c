/*
 * @Description: 122
 * @Author: superx
 * @Date: 2023-07-15 12:56:57
 * @LastEditTime: 2023-07-30 15:52:14
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    double num3;
    int num4;
    double temp;
    printf("������4����:");
    scanf("%d %d %lf %d", &num1, &num2, &num3, &num4); // 100 30 100.1234567 25
    temp = (num1 % num2) * num3 + num4;                // 22 12 100.12345678 1000000
    printf("\n������Ϊ:%016.7lf", temp);
    return temp;
}
