/*
 * @Description: 从键盘输入一个整数，如果是正数，输出该数自身;如果是负数，输出它的绝对值。
 * @Author: superx
 * @Date: 2023-07-15 23:27:41
 * @LastEditTime: 2023-07-15 23:27:43
 * @LastEditors: superx
 */

#include <stdio.h>;
#include <math.h>;

int main()
{
    int x;
    printf("请输入一个整数:");
    scanf("%d",&x);
    x = abs(x);
    printf("%d",x);
}