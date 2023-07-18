/*
 * @Description: 从键盘输入4个整数，要求按从大到小的顺序输出。
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
    printf("请输入4个整数：\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // 排序
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

    // 输出结果
    printf("按照从大到小的顺序输出：\n");
    printf("%d %d %d %d\n", num1, num2, num3, num4);

    return 0;
}
