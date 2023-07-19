/*
 * @Description: 要将100元钱换成1元、5元和10元的零钱，
 每种零钱的张数大于0，且为5的倍数，编程输出所有可能的换法。
 * @Author: superx
 * @Date: 2023-07-18 21:18:35
 * @LastEditTime: 2023-07-18 21:32:56
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int count = 0;

    for (int ones = 1; ones <= 100; ones++)
    {
        for (int fives = 1; fives <= 20; fives++)
        {
            for (int tens = 1; tens <= 10; tens++)
            {
                if (ones + 5 * fives + 10 * tens == 100 && fives % 5 == 0 && tens % 5 == 0)
                {
                    printf("换法%d：1元：%d张，5元：%d张，10元：%d张\n", ++count, ones, fives, tens);
                }
            }
        }
    }

    return 0;
}
