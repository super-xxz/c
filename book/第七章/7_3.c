/*
 * @Description: 3.�ҳ���ά�����е����ֵ����Сֵ,��������Ӧ�±�ֵ��
 * @Author: superx
 * @Date: 2023-07-26 21:57:51
 * @LastEditTime: 2023-07-29 22:06:49
 * @LastEditors: superx
 */
#include <stdio.h>
#define ROWS 4 
#define CLOS 3

int main ()
{
    int a[ROWS][CLOS]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int max = a[0][0],min = a[0][0];
    int i,j;
    // ��ȡ����
    int rows = sizeof(a) / sizeof(a[0]);
    // ��ȡ����
    int cols = sizeof(a[0]) / sizeof(a[0][0]);
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            if (a[i][j] < min){
                min = a[i][j];
            }
        }
    }
    printf("max = %d\n", max);
    printf("min = %d\n", min);
    printf("rows = %d\n", rows);
    printf("cols = %d\n", cols);
    
}