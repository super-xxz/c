/*
 * @Description: Ҫ��100ԪǮ����1Ԫ��5Ԫ��10Ԫ����Ǯ��
 ÿ����Ǯ����������0����Ϊ5�ı��������������п��ܵĻ�����
 * @Author: superx
 * @Date: 2023-07-18 21:18:35
 * @LastEditTime: 2023-07-18 21:32:56
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int count = 0;
    int ones,fives,tens;
    for (ones = 1; ones <= 100; ones++)
    {
        for (fives = 1; fives <= 20; fives++)
        {
            for (tens = 1; tens <= 10; tens++)
            {
                if (ones + 5 * fives + 10 * tens == 100 && fives % 5 == 0 && tens % 5 == 0)
                {
                    printf("����%d��1Ԫ��%d�ţ�5Ԫ��%d�ţ�10Ԫ��%d��\n", ++count, ones, fives, tens);
                }
            }
        }
    }

    return 0;
}
