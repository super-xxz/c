/*
 * @Description:override strstr function
 * @Author: superx
 * @Date: 2023-08-05 16:19:01
 * @LastEditTime: 2023-08-05 17:09:01
 * @LastEditors: superx
 */
#include <stdio.h>

char *mystrstr(char *a, char *b)
{
    char *p = a, *q = b;
    while (1)
    {
        if (*p != *q)
        {
            a = p;
            q = b;
            a++;
        }
        else
        {
            if (*q == '\0')
            {
                return a;
            }
            p++;
            q++;
            continue;
        }
        p++;
        if (!(*a))
        {
            return NULL;
        }
    }
}

int main()
{
    char a[] = "abs";
    char b[] = "bs";
    printf("%s", mystrstr(a, b));
}