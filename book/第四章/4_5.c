/*
 * @Description: �Ӽ�������һ���ַ��������Сд��ĸ����ת��Ϊ���Ӧ�Ĵ�д��ĸ;
 ����Ǵ�д��ĸ����ԭ�����:��������֣��������ʮ����ASCIIֵ;����������ַ�����ͳһ���@��
 * @Author: superx
 * @Date: 2023-07-15 23:35:07
 * @LastEditTime: 2023-07-15 23:40:43
 * @LastEditors: superx
 */

#include <stdio.h>

int main()
{
    char a;
    printf("������һ���ַ�:");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
        printf("%c", a + ('A'-'a'));
    else if (a >= 'A' && a <= 'Z')
        printf("%c", a);
    else if (a >= '0' && a <= '9')
        printf("%d", a);
    else
        printf("%c", '@');
}