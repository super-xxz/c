/*
 * @Description: һ�����100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룬
 �����£��ٷ����������ڵ�8�����ʱ�����������ף���8�η�����ߡ�
 * @Author: superx
 * @Date: 2023-07-18 20:10:45
 * @LastEditTime: 2023-07-18 21:10:17
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    float sum = 0, i, height = 100;

    for (i = 1; i <= 8; i++)
    {
        sum += height;
        height /= 2.0f;
    }
    printf("һ������%f��", sum);
    printf("�ڰ˴η���%f��", height);
}