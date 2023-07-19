/*
 * @Description: 百钱百鸡问题。用100钱买100只鸡，
 公鸡一只五钱，母鸡一只三钱，小鸡三只一钱，编程输出所有可能的买法（要求每种鸡至少要买1只)。
 * @Author: superx
 * @Date: 2023-07-18 21:29:59
 * @LastEditTime: 2023-07-19 12:22:27
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int x, y, z; // x为公鸡 y为母鸡 z为小鸡
    int sum = 0;
    int value = 100;
    for (x = 1; x < 20; x++)
    {
        for (y = 1; y < 33; y++)
        {
            z = 100 - x - y;
            if (5 * x + 3 * y + z / 3 == 100 && z % 3 == 0)
            {
                printf("\n公鸡有%d只,母鸡有%d只,小鸡有%d只", x, y, z);
            }
        }
    }
}