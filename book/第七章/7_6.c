/*
 * @Description: 自编写字符串复制函数(功能与strcpy完全一样)
 * @Author: superx
 * @Date: 2023-07-29 23:13:18
 * @LastEditTime: 2023-07-30 12:51:59
 * @LastEditors: superx
 */
#include <stdio.h>

void str_copy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char a[] = "abc";
    char b[] = "def";
    str_copy(a, b);
    int i = 0;
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%c", a[i]);
    }
}