/*
 * @Description: 从键盘输入一个字符，如果是小写字母，则转换为其对应的大写字母;
 如果是大写字母，则原样输出:如果是数字，则输出其十进制ASCII值;如果是其他字符，则统一输出@。
 * @Author: superx
 * @Date: 2023-07-15 23:35:07
 * @LastEditTime: 2023-07-15 23:40:43
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    char a;
    printf("请输入一个字符:");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
        printf("%c", a + ('A'-'a'));
    else if (a >= 'A' && a <= 'Z')
        printf("%c", a);
    else if (a >= '0' && a <= '9')
        printf("%d", a);
    else
        printf("%c", '@');
}