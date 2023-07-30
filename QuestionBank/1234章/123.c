/*
 * @Description: 123
 * @Author: superx
 * @Date: 2023-07-30 15:52:36
 * @LastEditTime: 2023-07-30 16:02:37
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    double num4;
    double temp;
    printf("\n请输入4个数:");
    scanf("%d %d %d %lf", &num1, &num2, &num3, &num4); // 25 100 30 100.12345
    temp = num1 + (num2 % num3) * num4;                 // 1000000 22 12 100.123456
    printf("\n计算结果为:%013.5lf", temp);
    return temp;
}
