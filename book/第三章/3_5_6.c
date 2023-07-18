/*
 * @Description: 编写一程序实现以下功能;从键盘上输入一个3位整数，逆序输出这个3位数并且计算各个位上的数字之和。
 * @Author: superx
 * @Date: 2023-07-15 18:54:59
 * @LastEditTime: 2023-07-15 21:58:48
 * @LastEditors: superx
 */
#include <stdio.h>

int main(){
    int x;
    printf("请输入一个3位整数:");
    scanf("%d",&x);
    int a,b,c;
    c = x/100;
    b= (x-100*c)/10;
    a = x-b*10-c*100; 
    printf("三位数分别是:个位=%d 十位=%d 百位=%d\n",a,b,c);
    printf("三位数之和为:%d",a+b+c);
}