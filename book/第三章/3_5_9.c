/*
 * @Description: (9）计算如下图所示的圆环的面积。
 小圆和大圆的半径从键盘读入，
 输出要有文字说明,精确到小数点后3位,请编程实现。
 * @Author: superx
 * @Date: 2023-07-15 22:28:11
 * @LastEditTime: 2023-07-15 23:03:22
 * @LastEditors: superx
 */

#include <stdio.h>
#include <math.h>
#define PI 3.1415926

void swap(float *a, float *b)
{
    float temp;
    temp = *a;
    *b = temp;
    *a = temp;
}

float area(float a, float b)
{
    float temp;
    // temp = pow(a, 2) * PI - pow(b, 2) * PI;
    temp = a*a*PI-b*b*PI;
    return temp;
}

int main()
{
    float r1, r2; // r1是大圆半径，r2是小圆半径
    scanf("\n%f %f", &r1, &r2);

    if (r2 > r1)
        swap(&r1, &r2);
    else if (r1 == r2)
        printf("0");

    float s = area(r1, r2);
    printf("圆环的面积为:%.3f", s);
}