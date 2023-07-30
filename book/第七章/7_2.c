/*
 * @Description: ����10������,�ҳ���ƽ��ֵ��ӽ����������
 * @Author: superx
 * @Date: 2023-07-22 13:50:24
 * @LastEditTime: 2023-07-22 15:27:13
 * @LastEditors: superx
 */

#include <stdio.h>
#include <math.h>

int average(int a[], int len)
{
    int sum = 0;
    int i;
    for (i = 0; i < len; i++)
    {
        sum += a[i];
    }
    sum = sum/len;
    return sum;
}

int main()
{
    int x[10];
    int len = sizeof(x) / sizeof(x[0]);
    int closest, i, j;
    // printf("������10������:\n");
    // for (i = 0; i < len; i++)
    // {
    //     scanf("%d", &x[i]);
    // }
    closest = x[0];
    int temp = average(x, len);
    for (i = 0; i < len; i++)
    {
        j = abs(temp - x[i]);
        if (closest > j)
        {
            closest = x[i];
        }
    }
    printf("ƽ��ֵΪ��%d\n", temp);
    printf("��ӽ�����Ϊ��%d\n", closest);
    return 0;
}