/*
 * @Description: �Ӽ�������4������,������е�������ʹδ�����
 * @Author: superx
 * @Date: 2023-07-15 23:10:18
 * @LastEditTime: 2023-07-15 23:17:50
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    int max, secondMax;

    printf("������4��������\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // �Ƚ��ҳ������
    max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }

    // �Ƚ��ҳ��δ���
    if (num1 < max)
    {
        secondMax = num1;
    }
    else
    {
        secondMax = num2;
    }
    if (num3 > secondMax && num3 < max)
    {
        secondMax = num3;
    }
    if (num4 > secondMax && num4 < max)
    {
        secondMax = num4;
    }

    printf("�������%d\n", max);
    printf("�δ�����%d\n", secondMax);

    return 0;
}
