/*
 * @Description: 计算并输出l!＋2!＋…+n!(其中n<16)。
 * @Author: superx
 * @Date: 2023-07-16 22:36:11
 * @LastEditTime: 2023-07-16 23:11:37
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    int i,j,sum=0;
    for ( i = 1; i <= 15; i++)
    {
        int temp;
        temp = 1;
        for ( j = i; j > 0; j--)
        {
            temp *= j;
            printf("%d ",temp);
        }
        sum+=temp;
        printf("\n");
    }
    printf("l!+2!+...+15!=%d",sum);
    
}