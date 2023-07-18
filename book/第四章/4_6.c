/*
 * @Description: 身体质量指数（BMI)是常用的衡量人体肥胖程度和是否健康的重要标准。BMI判断标准如下:
        BMI                                    分类
        小于18.5                               体重过低
        18.5（含）~24.0                         正常范围
        24.0（含）～28.0                        超重
        大于等于28.0                           肥胖
    BMI的计算公式:体重（kg)/身高(m）的平方。编程实现从键盘输入一个人的体重和身高，计算并输入其所在分类。
 * @Author: superx
 * @Date: 2023-07-15 23:41:49
 * @LastEditTime: 2023-07-15 23:51:33
 * @LastEditors: superx
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double height, weight;
    printf("请输入体重(kg) 身高(m):");
    scanf("%lf %lf", &weight, &height);
    double BMI;
    BMI = weight / (height * height);
    printf("BMI=%.2lf\n", BMI);
    if (BMI < 18.5)
    {
        printf("体重过低\n");
    }
    else if (BMI >= 18.5 && BMI < 24.0)
    {
        printf("正常范围\n");
    }
    else if (BMI >= 24.0 && BMI < 28.0)
    {
        printf("超重\n");
    }
    else
    {
        printf("肥胖\n");
    }
    return 0;
}