/*
 * @Description: 编写一程序实现以下功能:从键盘读入5个数numl、num2、num3、num4、num5，
输出:(numl÷num2的商)×num3+num4-num5，不需考虑num2为0和计算结果溢出的情况。
要求输出的结果中，整数部分宽度为6(不足6时以0补足)、小数部分宽度为8。
 * @Author: superx
 * @Date: 2023-07-15 16:41:04
 * @LastEditTime: 2023-07-15 23:12:05
 * @LastEditors: superx
 */
#include <stdio.h>

float caculate(float num1, float num2, float num3, float num4, float num5)
{
    float temp;
    temp = (num1 / num2) * num3 + num4 - num5;
    return temp;
}

int main()
{
    float num1;
    float num2;
    float num3;
    float num4;
    float num5;
    printf("请输入5个数:");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    printf("\n计算结果为:%014.6f",caculate(num1,num2,num3,num4,num5));
}