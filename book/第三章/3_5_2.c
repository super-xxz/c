/*
 * @Description: 英文大写转小写，并输出ascll码
 * @Author: superx
 * @Date: 2023-07-15 16:23:00
 * @LastEditTime: 2023-07-15 23:11:13
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    char x;
    printf("请输入一个大写的英文字母:");
    scanf("%c",&x);
    if (x<='A' || x>='Z')
    {
        printf("这不是大写的英文字母");
        return 0;
    }
    printf("转换后为:%c\n",x+32);
    printf("ascll码为:%d",x);
    return 0;
}