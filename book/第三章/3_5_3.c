/*
 * @Description: ��дһ����ʵ�����¹���:�Ӽ��̶���5����numl��num2��num3��num4��num5��
���:(numl��num2����)��num3+num4-num5�����迼��num2Ϊ0�ͼ���������������
Ҫ������Ľ���У��������ֿ��Ϊ6(����6ʱ��0����)��С�����ֿ��Ϊ8��
 * @Author: superx
 * @Date: 2023-07-15 16:41:04
 * @LastEditTime: 2023-07-15 23:12:05
 * @LastEditors: superx
 */
#include <stdio.h>

float caculate(float num1, float num2, float num3, float num4, float num5)
{
    float temp;
    temp = (num1 / num2) * num3 + num4 - num5;
    return temp;
}

int main()
{
    float num1;
    float num2;
    float num3;
    float num4;
    float num5;
    printf("������5����:");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    printf("\n������Ϊ:%014.6f",caculate(num1,num2,num3,num4,num5));
}