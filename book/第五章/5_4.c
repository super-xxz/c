/*
 * @Description: һ�����100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룬
 �����£��ٷ����������ڵ�8�����ʱ�����������ף���8�η�����ߡ�
 * @Author: superx
 * @Date: 2023-07-18 20:10:45
 * @LastEditTime: 2023-07-19 14:10:28
 * @LastEditors: superx
 */

#include <stdio.h>
#define N 4

int main()
{
    float sum = 0, i, height = 100;

    for (i = 1; i <= N; i++)
    {
        height /= 2.0f;
        sum += height * 2;
    }
    printf("һ������%f��", sum);
    printf("��%d�η���%f��", N - 1, height / 2);
}