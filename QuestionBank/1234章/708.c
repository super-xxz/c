/*
 * @Description: 708
 * @Author: superx
 * @Date: 2023-07-30 16:03:25
 * @LastEditTime: 2023-07-30 16:15:14
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    int input, output,i;
    printf("Input an integer:");
    scanf("%d", &input);
    for ( i = 0; i < 3; i++)
    {
        output = output * 10 + input % 10;
        input /= 10;
    }
    printf("\nThe result is %03d", output); // 750
}