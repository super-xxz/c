/*
 * @Description: ��������������m��n,���㲢��������Լ����
 * @Author: superx
 * @Date: 2023-07-18 19:07:04
 * @LastEditTime: 2023-07-19 14:26:17
 * @LastEditors: superx
 */
#include <stdio.h>
#include <math.h>

void swap(int *x, int *y)
{
    int temp;
    if (*x < *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

int main()
{
    int m, n, i;
    printf("��������������m��n,�����򽫻���㲢��������Լ��:");
    scanf("%d %d", &m, &n);
    swap(&m, &n);
    for (i = n; i > 0; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("���Լ��Ϊ:%d", i);
            break;
        }
    }

    return 0;
}