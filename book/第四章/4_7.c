/*
 * @Description: �Ӽ�������4��������Ҫ�󰴴Ӵ�С��˳�������
 * @Author: superx
 * @Date: 2023-07-15 23:52:08
 * @LastEditTime: 2023-07-15 23:52:10
 * @LastEditors: superx
 */

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2, num3, num4;
    printf("������4��������\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // ����
    if (num1 < num2)
        swap(&num1, &num2);
    if (num2 < num3)
        swap(&num2, &num3);
    if (num3 < num4)
        swap(&num3, &num4);
    if (num1 < num2)
        swap(&num1, &num2);
    if (num2 < num3)
        swap(&num2, &num3);
    if (num1 < num2)
        swap(&num1, &num2);

    // ������
    printf("���մӴ�С��˳�������\n");
    printf("%d %d %d %d\n", num1, num2, num3, num4);

    return 0;
}
