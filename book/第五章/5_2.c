/*
 * @Description: 输出1000以内的所有完数。“完数”是指一个数的因子之和等于自身
 * @Author: superx
 * @Date: 2023-07-16 23:12:58
 * @LastEditTime: 2023-07-18 19:02:51
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    int i, j, sum = 0;
    printf("1000以内的完数有:");
    for (i = 1; i < 1000; i++)
    {
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("\n%d", sum);
        }
        sum = 0;
    }
}
