/*
 * @Description: ����һ���ַ����ֱ�ͳ������Ӣ����ĸ�����ֺ������ַ��ĸ�����
 * @Author: superx
 * @Date: 2023-07-18 20:50:17
 * @LastEditTime: 2023-07-18 21:09:43
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
            count_digit += 1;
        }
        else if ((buf[i] >= 'a' && buf[i] <= 'z') || (buf[i] >= 'A' && buf[i] <= 'Z'))
        {
            count_alpha += 1;
        }
        else
        {
            count_char += 1;
        }
        i++;
    }

    printf("\nӢ����ĸ�ĸ�����: %d", count_alpha);
    printf("\n���ֵĸ�����: %d", count_digit);
    printf("\n�����ַ��ĸ�����: %d", count_char);

    return 0;
}
