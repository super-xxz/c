/*
 * @Description: ���볤������ε��ܳ������
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
    float x, y; // x��ʾ���εĳ���y��ʾ���εĿ�
    printf("��������εĳ��Ϳ�");
    scanf("%f %f", &x, &y);
    printf("%f %f \n", x, y);
    printf("���ε��ܳ���:%.2f\n", perimeter(&x, &y));
    printf("���ε������:%.2f\n", area(&x, &y));
}