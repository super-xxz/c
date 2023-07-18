/*
 * @Description: 从键盘输入4个整数,输出其中的最大数和次大数。
 * @Author: superx
 * @Date: 2023-07-15 23:10:18
 * @LastEditTime: 2023-07-15 23:17:50
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    int max, secondMax;

    printf("请输入4个整数：\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // 比较找出最大数
    max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }

    // 比较找出次大数
    if (num1 < max)
    {
        secondMax = num1;
    }
    else
    {
        secondMax = num2;
    }
    if (num3 > secondMax && num3 < max)
    {
        secondMax = num3;
    }
    if (num4 > secondMax && num4 < max)
    {
        secondMax = num4;
    }

    printf("最大数：%d\n", max);
    printf("次大数：%d\n", secondMax);

    return 0;
}
