/*
 * @Description: ��������ָ����BMI)�ǳ��õĺ���������̶ֳȺ��Ƿ񽡿�����Ҫ��׼��BMI�жϱ�׼����:
        BMI                                    ����
        С��18.5                               ���ع���
        18.5������~24.0                         ������Χ
        24.0��������28.0                        ����
        ���ڵ���28.0                           ����
    BMI�ļ��㹫ʽ:���أ�kg)/���(m����ƽ�������ʵ�ִӼ�������һ���˵����غ���ߣ����㲢���������ڷ��ࡣ
 * @Author: superx
 * @Date: 2023-07-15 23:41:49
 * @LastEditTime: 2023-07-15 23:51:33
 * @LastEditors: superx
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double height, weight;
    printf("����������(kg) ���(m):");
    scanf("%lf %lf", &weight, &height);
    double BMI;
    BMI = weight / (height * height);
    printf("BMI=%.2lf\n", BMI);
    if (BMI < 18.5)
    {
        printf("���ع���\n");
    }
    else if (BMI >= 18.5 && BMI < 24.0)
    {
        printf("������Χ\n");
    }
    else if (BMI >= 24.0 && BMI < 28.0)
    {
        printf("����\n");
    }
    else
    {
        printf("����\n");
    }
    return 0;
}