/*
 * @Description: ��Ǯ�ټ����⡣��100Ǯ��100ֻ����
 ����һֻ��Ǯ��ĸ��һֻ��Ǯ��С����ֻһǮ�����������п��ܵ��򷨣�Ҫ��ÿ�ּ�����Ҫ��1ֻ)��
 * @Author: superx
 * @Date: 2023-07-18 21:29:59
 * @LastEditTime: 2023-07-19 12:22:27
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int x, y, z; // xΪ���� yΪĸ�� zΪС��
    int sum = 0;
    int value = 100;
    for (x = 1; x < 20; x++)
    {
        for (y = 1; y < 33; y++)
        {
            z = 100 - x - y;
            if (5 * x + 3 * y + z / 3 == 100 && z % 3 == 0)
            {
                printf("\n������%dֻ,ĸ����%dֻ,С����%dֻ", x, y, z);
            }
        }
    }
}