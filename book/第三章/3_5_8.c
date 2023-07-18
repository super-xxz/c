/*
 * @Description: 分别用getchar()和scanf()函数读入2个不同的字符，用 putchar()和printf()
    函数将这两个字符输出，比较这几个函数对字符操作的不同。
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