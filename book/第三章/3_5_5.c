/*
 * @Description: ��дһ����ʵ�����¹���:�Ӽ�������һ���ڣ�������֮���ԡ�-���ָ�������ͬ������ʽ���ԡ�/����Ϊ�ָ�����
��̿����ز�:printf( "\n please input a date:")��printf("\n the date is: ")�� 
 * @Author: superx
 * @Date: 2023-07-15 17:06:11
 * @LastEditTime: 2023-07-15 23:12:29
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    int x,y,z;
    printf( "\n please input a date:");
    scanf("%d-%d-%d", &x, &y,&z);
    printf("\n the date is: ");
    printf("%d/%d/%d",x,y,z);
}