/*
 * @Description: �Ӽ�������a��b��c���������ж��ܷ񹹳������Ρ����ܹ��������Σ����㲢��������ε������
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
    printf("��������������");
    scanf("%f %f %f", &a, &b, &c);

    // �ж��ܷ񹹳�������
    if (a + b > c && a + c > b && b + c > a)
    {
        float s, area;
        s = (a + b + c) / 2;                          // ������ܳ�
        area = sqrt(s * (s - a) * (s - b) * (s - c)); // �������
        printf("�ܹ��������Σ����Ϊ��%.2f\n", area);
    }
    else
    {
        printf("���ܹ���������\n");
    }

    return 0;
}
