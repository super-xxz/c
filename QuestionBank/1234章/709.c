/*
 * @Description: 709
 * @Author: superx
 * @Date: 2023-07-30 16:15:52
 * @LastEditTime: 2023-07-30 16:28:55
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    float c, f;
    printf("Input the degree:"); // 120
    scanf("%f", &f);
    c = 5 * (f - 32) / 9;
    printf("\nF(%.2f)=C(%.2f)", f, c); // F(120.00)=C(48.89)
}
