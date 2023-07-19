/*
 * @Description: 从键盘输入任意个整数，以-888结束（不计入)，计算并输出其中的最大数和最小数。
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
    int isFirst = 1; // 标记是否是第一个输入的数

    printf("请输入整数，多个整数之间用空格或换行分隔(以-888结束):\n");

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

    printf("最大数：%d\n", max);
    printf("最小数：%d\n", min);

    return 0;
}
