/*
 * @Description: 
 * @Author: superx
 * @Date: 2023-07-29 22:46:25
 * @LastEditTime: 2023-07-29 23:11:29
 * @LastEditors: superx
 */
/*
 * @Description: 输入3个字符串,找出其中最大的字符串
 * @Author: superx
 * @Date: 2023-07-29 22:46:25
 * @LastEditTime: 2023-07-29 22:58:07
 * @LastEditors: superx
 */
#include <stdio.h>
#include <string.h>

int main()
{
    printf("请输入三个字符串:");//abc acb adc
    char a[3][1024];
    int i,j,len=sizeof(a)/sizeof(a[0]);
    for ( i = 0; i < 3; i++)
    {
        scanf("%s", &a[i]);
    }
    char max[1024];
    strcpy(max,a[0]);
    for ( i = 0; i < len; i++)
    {
        if (strcmp(a[i],max) > 0)
        {
            strcpy(max,a[i]);
        }
    }
    printf("\n最大的字符串是:%s",max);
}