/*
 * @Description: 输入两个正整数m和n,计算并输出其最大公约数。
 * @Author: superx
 * @Date: 2023-07-18 19:07:04
 * @LastEditTime: 2023-07-19 14:26:17
 * @LastEditors: superx
 */
#include <stdio.h>
#include <math.h>

void swap(int *x, int *y)
{
    int temp;
    if (*x < *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

int main()
{
    int m, n, i;
    printf("输入两个正整数m和n,本程序将会计算并输出其最大公约数:");
    scanf("%d %d", &m, &n);
    swap(&m, &n);
    for (i = n; i > 0; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("最大公约数为:%d", i);
            break;
        }
    }

    return 0;
}