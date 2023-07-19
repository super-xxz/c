/*
 * @Description: ��������Ŀ
    1.�������:����rl,r2�����Բ�ε�Ƭ�������
    2.�ҵ�10000�������������������ж������Ĺ����ú���ʵ�֡�
    3����������������m��n���������Լ������С��������
    4.һ��5λ�����ж����ǲ��ǻ����������磬12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��
    5���Ӽ�����������һ���������������������������
 * @Author: superx
 * @Date: 2023-07-19 12:23:41
 * @LastEditTime: 2023-07-19 12:59:25
 * @LastEditors: superx
 */

#include <stdio.h>
#define PI 3.1415926

void swap_float(float *x, float *y)
{
    float temp;
    if (*x < *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

void swap_int(int *x, int *y)
{
    int temp;
    if (*x < *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

float area() // 6_1 �������:����rl,r2�����Բ�ε�Ƭ�����
{
    float r1, r2;
    printf("������r1,r2:");
    scanf("%f%f", &r1, &r2);
    swap_float(&r1, &r2);
    printf("\n���Ϊ:%.2f", PI * (r1 * r1 - r2 * r2));
}

int wanshu() // 6_2 �ҵ�10000�������������������ж������Ĺ����ú���ʵ��
{
    int i, j, sum = 0;
    printf("\n10000���ڵ�������:");
    for (i = 1; i < 10000; i++)
    {
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("\n%d", sum);
        }
        sum = 0;
    }
}

void MaxCommonDivisor() // ���Լ��
{
    int m, n, i;
    printf("��������������m��n,�����򽫻���㲢��������Լ��:");
    scanf("%d %d", &m, &n);
    swap_int(&m, &n);
    for (i = n; i > 0; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("���Լ��Ϊ:%d", i);
            break;
        }
    }
}

void MinCommonMultiple()
{
    int m, n, i = 1;
    printf("\n��������������m��n,�����򽫻���㲢�������С������:");
    scanf("%d %d", &m, &n);
    swap_int(&m, &n);
    while (i > 0)
    {
        if (m * i % n == 0)
        {
            printf("\n��С������Ϊ:%d", m * i);
            break;
        }
        i++;
    }
}

void huiwen() // 6_4 һ��5λ�����ж����ǲ��ǻ�����
{
    char num[5];
    printf("\n������һ����λ��:");
    scanf("%s", &num);
    if (num[0] == num[4] && num[1] == num[3])
    {
        printf("\n%s������һ��������", num);
    }
    else
    {
        printf("\n%s�������ǻ�����", num);
    }
}

void nixushu() // 6_5 �Ӽ�����������һ�������������������������
{
    int number, reversedNumber = 0;
    printf("\n������һ��������:");
    scanf("%d", &number);

    // �������
    while (number > 0)
    {
        int digit = number % 10;                      // ȡ�����λ������
        reversedNumber = reversedNumber * 10 + digit; // �����ּӵ���������
        number /= 10;                                 // ȥ�����λ������
    }
    printf("������Ϊ��%d\n", reversedNumber);
}

int main()
{
    // 6_1 �������:����rl,r2�����Բ�ε�Ƭ�����
    area();
    // 6_2 �ҵ�10000�������������������ж������Ĺ����ú���ʵ��
    wanshu();
    // 6_3 ��������������m��n���������Լ������С������
    MaxCommonDivisor();
    // MinCommonMultiple();
    // 6_4 һ��5λ�����ж����ǲ��ǻ�����
    huiwen();
    // 6_5 �Ӽ�����������һ�������������������������
    nixushu();
}