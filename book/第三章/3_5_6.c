/*
 * @Description: ��дһ����ʵ�����¹���;�Ӽ���������һ��3λ����������������3λ�����Ҽ������λ�ϵ�����֮�͡�
 * @Author: superx
 * @Date: 2023-07-15 18:54:59
 * @LastEditTime: 2023-07-15 21:58:48
 * @LastEditors: superx
 */
#include <stdio.h>

int main(){
    int x;
    printf("������һ��3λ����:");
    scanf("%d",&x);
    int a,b,c;
    c = x/100;
    b= (x-100*c)/10;
    a = x-b*10-c*100; 
    printf("��λ���ֱ���:��λ=%d ʮλ=%d ��λ=%d\n",a,b,c);
    printf("��λ��֮��Ϊ:%d",a+b+c);
}