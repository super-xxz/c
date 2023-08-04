/*
 * @Description: 输入m个浮点教、然后按升序进行排序并输出
 * @Author: superx
 * @Date: 2023-07-21 19:14:01
 * @LastEditTime: 2023-07-22 13:41:49
 * @LastEditors: superx
 */

#include <stdio.h>

<<<<<<< HEAD
void sort(float a[], int length) // bubble_sort
=======
void sort(float a[], int length) // bobble_sort
>>>>>>> 6618d199c6ed555e56cc86f552c6b4be3b376ff7
{
    int i, j;
    float temp;
    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    float x[10];
    int len, i;
    printf("请输入m个浮点数:\n");
    len = sizeof(x) / sizeof(x[0]);
    for (i = 0; i < len; i++)
    {
        scanf("%f", &x[i]);
    }
    sort(x, len);
    for (i = 0; i < len; i++)
    {
        printf("%f ", x[i]); // 1.00 1.01 1.05 2.01 2.33 1.78
    }
    return 0;
}