/*
 * @Description: 输入一行字符，分别统计其中英文字母、数字和其他字符的个数。
 * @Author: superx
 * @Date: 2023-07-18 20:50:17
 * @LastEditTime: 2023-07-19 14:17:12
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    char buf[1024];
    printf("请输入一行字符: ");
    fgets(buf, sizeof(buf), stdin);

    int i = 0;
    int count_alpha = 0;
    int count_digit = 0;
    int count_char = 0;

    while (buf[i] != '\0' && buf[i] != '\n')
    {
        if (buf[i] >= '0' && buf[i] <= '9')
        {
            count_digit ++;
        }
        else if ((buf[i] >= 'a' && buf[i] <= 'z') || (buf[i] >= 'A' && buf[i] <= 'Z'))
        {
            count_alpha ++;
        }
        else
        {
            count_char ++;
        }
        i++;
    }

    printf("\n英文字母的个数是: %d", count_alpha);
    printf("\n数字的个数是: %d", count_digit);
    printf("\n其他字符的个数是: %d", count_char);

    return 0;
}
