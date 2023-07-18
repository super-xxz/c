/*
 * @Description: 编写一程序实现以下功能:从键盘输入一日期，年月日之间以“-”分隔，并以同样的形式但以“/”作为分隔符。
编程可用素材:printf( "\n please input a date:")，printf("\n the date is: ")。 
 * @Author: superx
 * @Date: 2023-07-15 17:06:11
 * @LastEditTime: 2023-07-15 23:12:29
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    int x,y,z;
    printf( "\n please input a date:");
    scanf("%d-%d-%d", &x, &y,&z);
    printf("\n the date is: ");
    printf("%d/%d/%d",x,y,z);
}