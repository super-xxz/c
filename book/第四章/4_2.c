/*
 * @Description: ��һ������:
         x          x<1
    Y=    3x+5,      1<=x<30
         7x-3       x>=30
    ��д��������x��ֵ,���㲢���y��ֵ��
 * @Author: superx
 * @Date: 2023-07-15 23:18:36
 * @LastEditTime: 2023-07-15 23:25:07
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int x;
    printf("������һ������:");
    scanf("%d", &x);
    if (x < 1)
    {
        printf("y=%d", x);
    }
    else if (x >= 1 && x < 30)
    {
        printf("y=%d", 3 * x + 5);
    }
    else
    {
        printf("y=%d", 7 * x - 3);
    }
}