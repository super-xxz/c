/*
 * @Description: ��дһ����ʵ�����¹���:�Ӽ��̶���4�����ݣ�����Ϊ1��������2���ַ���1��ʵ��)��
Ȼ��ʾ����ʽ���������4�����ݡ���̿����ز�:printf("������4������
(����Ϊ1������2�ַ���1ʵ��):")��printf("\n��4�����ݵ���Ϊ:")��
 * @Author: superx
 * @Date: 2023-07-15 16:53:43
 * @LastEditTime: 2023-07-15 23:12:18
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    int x;
    char y,z;
    float k;
    printf("������4������(����Ϊ1������2�ַ���1ʵ��):");
    scanf("%d %c %c %f",&x,&y,&z,&k);
    printf("\n��4�����ݵ���Ϊ:");
    printf("4-%.2f 3-%c 2-%c 1-%d",k,z,y,x);
}