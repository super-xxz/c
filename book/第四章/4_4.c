/*
 * @Description: 从键盘输入a，b，c三个数，判断能否构成三角形。若能构成三角形，计算并输出三角形的面积。
 * @Author: superx
 * @Date: 2023-07-15 23:30:15
 * @LastEditTime: 2023-07-15 23:34:53
 * @LastEditors: superx
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("请输入三个数：");
    scanf("%f %f %f", &a, &b, &c);

    // 判断能否构成三角形
    if (a + b > c && a + c > b && b + c > a)
    {
        float s, area;
        s = (a + b + c) / 2;                          // 计算半周长
        area = sqrt(s * (s - a) * (s - b) * (s - c)); // 计算面积
        printf("能构成三角形，面积为：%.2f\n", area);
    }
    else
    {
        printf("不能构成三角形\n");
    }

    return 0;
}
