#include <stdio.h>

int main()
{
    int num1;
    int num2;
    float num3;
    int num4;
    float temp;
    printf("������4������");
    scanf("%d %d %f %d", &num1, &num2, &num3, &num4);
    temp=(num1%num2)*num3+num4;
    printf("\n������Ϊ��%15f",temp);
    return temp;
}
