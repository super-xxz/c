/*
 * @Description: 一个球从100米高度自由落下，每次落地后反跳回原高度的一半，
 再落下，再反弹。求它在第8次落地时共经过多少米，第8次反弹多高。
 * @Author: superx
 * @Date: 2023-07-18 20:10:45
 * @LastEditTime: 2023-07-18 21:10:17
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    float sum = 0, i, height = 100;

    for (i = 1; i <= 8; i++)
    {
        sum += height;
        height /= 2.0f;
    }
    printf("一共经过%f米", sum);
    printf("第八次反弹%f米", height);
}