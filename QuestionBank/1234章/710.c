/*
 * @Description: 710
 * @Author: superx
 * @Date: 2023-07-30 16:29:14
 * @LastEditTime: 2023-07-30 16:32:57
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    printf("Input a lowercase letter:");
    char a;
    scanf("%c",&a);
    printf("\ny(%d)",a);
    printf("\nY(%d)",a+('A'-'a'));
}