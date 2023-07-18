#include <stdio.h>

int main()
{
    int num1;
    int num2;
    float num3;
    int num4;
    float temp;
    printf("请输入4个数：");
    scanf("%d %d %f %d", &num1, &num2, &num3, &num4);
    temp=(num1%num2)*num3+num4;
    printf("\n计算结果为：%15f",temp);
    return temp;
}
