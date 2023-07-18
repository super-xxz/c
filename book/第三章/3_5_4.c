/*
 * @Description: 编写一程序实现以下功能:从键盘读入4个数据（依次为1个整数、2个字符、1个实数)，
然后按示例格式倒序输出这4个数据。编程可用素材:printf("请输入4个数据
(依次为1整数、2字符、1实数):")，printf("\n这4个数据倒序为:")。
 * @Author: superx
 * @Date: 2023-07-15 16:53:43
 * @LastEditTime: 2023-07-15 23:12:18
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    int x;
    char y,z;
    float k;
    printf("请输入4个数据(依次为1整数、2字符、1实数):");
    scanf("%d %c %c %f",&x,&y,&z,&k);
    printf("\n这4个数据倒序为:");
    printf("4-%.2f 3-%c 2-%c 1-%d",k,z,y,x);
}