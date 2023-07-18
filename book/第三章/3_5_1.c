/*
 * @Description: 输入长宽求矩形的周长和面积
 * @Author: superx
 * @Date: 2023-07-15 15:54:17
 * @LastEditTime: 2023-07-15 23:11:53
 * @LastEditors: superx
 */
#include <stdio.h>

float perimeter(float *x, float *y)
{
    return 2 * *x + 2 * *y;
}

float area(float *x, float *y)
{
    return *x * *y;
}

int main()
{
    float x, y; // x表示矩形的长，y表示矩形的宽
    printf("请输入矩形的长和宽：");
    scanf("%f %f", &x, &y);
    printf("%f %f \n", x, y);
    printf("矩形的周长是:%.2f\n", perimeter(&x, &y));
    printf("矩形的面积是:%.2f\n", area(&x, &y));
}