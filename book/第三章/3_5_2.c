/*
 * @Description: Ӣ�Ĵ�дתСд�������ascll��
 * @Author: superx
 * @Date: 2023-07-15 16:23:00
 * @LastEditTime: 2023-07-15 23:11:13
 * @LastEditors: superx
 */
#include <stdio.h>

int main()
{
    char x;
    printf("������һ����д��Ӣ����ĸ:");
    scanf("%c",&x);
    if (x<='A' || x>='Z')
    {
        printf("�ⲻ�Ǵ�д��Ӣ����ĸ");
        return 0;
    }
    printf("ת����Ϊ:%c\n",x+32);
    printf("ascll��Ϊ:%d",x);
    return 0;
}