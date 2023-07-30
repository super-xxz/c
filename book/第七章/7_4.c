/*
 * @Description: 4.输入—个m行n列的矩阵,输出各行与各列的元素之和。
 * @Author: superx
 * @Date: 2023-07-29 22:06:14
 * @LastEditTime: 2023-07-29 22:45:03
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("\n请输入矩阵的行数:");
    scanf("%d", &rows);
    printf("\n请输入矩阵的列数:");
    scanf("%d", &cols);
    int a[rows][cols];
    printf("\n请输入矩阵:");
    int i,j;
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);// 1 2 3 4 5 6 7 8 9 10 11 12
        }
    }
    int row_sum_value,cols_sum_value;
    for ( i = 0; i < rows; i++)
    {
        row_sum_value = 0;
        for ( j = 0; j < cols; j++) 
        {
            row_sum_value += a[i][j];
        }
        printf("\n第%d行的行和是:%d",i+1,row_sum_value);
    }
    for ( i = 0; i < cols; i++)
    {
        cols_sum_value = 0;
        for ( j = 0; j < rows; j++) 
        {
            cols_sum_value += a[j][i];
        }
        printf("\n第%d列的行和是:%d",i+1,cols_sum_value);
    }
}
