/*
 * @Description: 有一个5*5的矩阵，通过子函数找出每行的最大教并输出，以及整个矩阵中的最大数并输出。
 * @Author: superx
 * @Date: 2023-08-05 14:49:30
 * @LastEditTime: 2023-08-05 16:18:53
 * @LastEditors: superx
 */
#include <stdio.h>

int Find_max_value(int a[][5],int row)
{

}

int main()
{
    int a[5][5] = {0};
    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]); 
        }
    }
    int len = sizeof(a[0])/sizeof(a[0][0]);
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}