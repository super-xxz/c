/*
 * @Description: �Ӽ��������������������-888������������)�����㲢������е����������С����
 * @Author: superx
 * @Date: 2023-07-18 21:09:49
 * @LastEditTime: 2023-07-18 21:15:37
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int num;
    int max = 0;
    int min = 0;
    int isFirst = 1; // ����Ƿ��ǵ�һ���������

    printf("�������������������֮���ÿո���зָ�(��-888����):\n");

    while (scanf("%d", &num) == 1)
    {
        if (num == -888)
        {
            break;
        }
        
        if (isFirst)
        {
            max = num;
            min = num;
            isFirst = 0;
        }
        else
        {
            if (num > max)
            {
                max = num;
            }
            if (num < min)
            {
                min = num;
            }
        }
    }

    printf("�������%d\n", max);
    printf("��С����%d\n", min);

    return 0;
}
