/*
 * @Description: (9����������ͼ��ʾ��Բ���������
 СԲ�ʹ�Բ�İ뾶�Ӽ��̶��룬
 ���Ҫ������˵��,��ȷ��С�����3λ,����ʵ�֡�
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
    float r1, r2; // r1�Ǵ�Բ�뾶��r2��СԲ�뾶
    scanf("\n%f %f", &r1, &r2);

    if (r2 > r1)
        swap(&r1, &r2);
    else if (r1 == r2)
        printf("0");

    float s = area(r1, r2);
    printf("Բ�������Ϊ:%.3f", s);
}