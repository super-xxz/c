/*
 * @Description: ����һ���ַ����ֱ�ͳ������Ӣ����ĸ�����ֺ������ַ��ĸ�����
 * @Author: superx
 * @Date: 2023-07-18 20:50:17
 * @LastEditTime: 2023-07-19 14:17:12
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    char buf[1024];
    printf("������һ���ַ�: ");
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

    printf("\nӢ����ĸ�ĸ�����: %d", count_alpha);
    printf("\n���ֵĸ�����: %d", count_digit);
    printf("\n�����ַ��ĸ�����: %d", count_char);

    return 0;
}
