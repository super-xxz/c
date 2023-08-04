/*
 * @Description: 有一个包含有10个整型数的数组，分别诵讨两个子函数找出其中最大数及最小数并输出。
 * @Author: superx
 * @Date: 2023-08-05 14:38:36
 * @LastEditTime: 2023-08-05 14:46:18
 * @LastEditors: superx
 */
#include <stdio.h>

int Find_max_value(int x[], int len)
{
    int i = 0, max = x[0];
    for (i = 0; i < len - 1; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
    }
    return max;
}

int Find_min_value(int x[], int len)
{
    int i = 0, min = x[0];
    for (i = 0; i < len - 1; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
    }
    return min;
}

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(a) / sizeof(a[0]);
    printf("\nmax=%d", Find_max_value(a, len));
    printf("\nmin=%d", Find_min_value(a, len));
}