/*
 * @Description: 第六章题目
    1.计算面积:输入rl,r2，求出圆形垫片的面积。
    2.找到10000以内所有完数，其中判断完数的功能用函数实现。
    3，输入两个正整数m和n，求其最大公约数和最小公倍数。
    4.一个5位数，判断它是不是回文数。例如，12321是回文数，个位与万位相同，十位与千位相同。
    5．从键盘输入任意一个正整数，输出该数的逆序数。
 * @Author: superx
 * @Date: 2023-07-19 12:23:41
 * @LastEditTime: 2023-07-19 12:59:25
 * @LastEditors: superx
 */

#include <stdio.h>
#define PI 3.1415926

void swap_float(float *x, float *y)
{
    float temp;
    if (*x < *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

void swap_int(int *x, int *y)
{
    int temp;
    if (*x < *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

float area() // 6_1 计算面积:输入rl,r2，求出圆形垫片的面积
{
    float r1, r2;
    printf("请输入r1,r2:");
    scanf("%f%f", &r1, &r2);
    swap_float(&r1, &r2);
    printf("\n面积为:%.2f", PI * (r1 * r1 - r2 * r2));
}

int wanshu() // 6_2 找到10000以内所有完数，其中判断完数的功能用函数实现
{
    int i, j, sum = 0;
    printf("\n10000以内的完数有:");
    for (i = 1; i < 10000; i++)
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

void MaxCommonDivisor() // 最大公约数
{
    int m, n, i;
    printf("输入两个正整数m和n,本程序将会计算并输出其最大公约数:");
    scanf("%d %d", &m, &n);
    swap_int(&m, &n);
    for (i = n; i > 0; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("最大公约数为:%d", i);
            break;
        }
    }
}

void MinCommonMultiple()
{
    int m, n, i = 1;
    printf("\n输入两个正整数m和n,本程序将会计算并输出其最小公倍数:");
    scanf("%d %d", &m, &n);
    swap_int(&m, &n);
    while (i > 0)
    {
        if (m * i % n == 0)
        {
            printf("\n最小公倍数为:%d", m * i);
            break;
        }
        i++;
    }
}

void huiwen() // 6_4 一个5位数，判断它是不是回文数
{
    char num[5];
    printf("\n请输入一个五位数:");
    scanf("%s", &num);
    if (num[0] == num[4] && num[1] == num[3])
    {
        printf("\n%s该数是一个回文数", num);
    }
    else
    {
        printf("\n%s该数不是回文数", num);
    }
}

void nixushu() // 6_5 从键盘输入任意一个正整数，输出该数的逆序数
{
    int number, reversedNumber = 0;
    printf("\n请输入一个正整数:");
    scanf("%d", &number);

    // 逆序计算
    while (number > 0)
    {
        int digit = number % 10;                      // 取出最低位的数字
        reversedNumber = reversedNumber * 10 + digit; // 将数字加到逆序数中
        number /= 10;                                 // 去掉最低位的数字
    }
    printf("逆序数为：%d\n", reversedNumber);
}

int main()
{
    // 6_1 计算面积:输入rl,r2，求出圆形垫片的面积
    area();
    // 6_2 找到10000以内所有完数，其中判断完数的功能用函数实现
    wanshu();
    // 6_3 输入两个正整数m和n，求其最大公约数和最小公倍数
    MaxCommonDivisor();
    // MinCommonMultiple();
    // 6_4 一个5位数，判断它是不是回文数
    huiwen();
    // 6_5 从键盘输入任意一个正整数，输出该数的逆序数
    nixushu();
}