/*
 * @Description: 一个球从100米高度自由落下，每次落地后反跳回原高度的一半，
 再落下，再反弹。求它在第8次落地时共经过多少米，第8次反弹多高。
 * @Author: superx
 * @Date: 2023-07-18 20:10:45
 * @LastEditTime: 2023-07-19 14:10:28
 * @LastEditors: superx
 */

#include <stdio.h>
#define N 4

int main()
{
    float sum = 0, i, height = 100;

    for (i = 1; i <= N; i++)
    {
        height /= 2.0f;
        sum += height * 2;
    }
    printf("一共经过%f米", sum);
    printf("第%d次反弹%f米", N - 1, height / 2);
}