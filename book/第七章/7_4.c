/*
 * @Description: 4.���롪��m��n�еľ���,�����������е�Ԫ��֮�͡�
 * @Author: superx
 * @Date: 2023-07-29 22:06:14
 * @LastEditTime: 2023-07-29 22:45:03
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("\n��������������:");
    scanf("%d", &rows);
    printf("\n��������������:");
    scanf("%d", &cols);
    int a[rows][cols];
    printf("\n���������:");
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
        printf("\n��%d�е��к���:%d",i+1,row_sum_value);
    }
    for ( i = 0; i < cols; i++)
    {
        cols_sum_value = 0;
        for ( j = 0; j < rows; j++) 
        {
            cols_sum_value += a[j][i];
        }
        printf("\n��%d�е��к���:%d",i+1,cols_sum_value);
    }
}
