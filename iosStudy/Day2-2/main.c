//
//  main.c
//  Day2-2
//
//  Created by chengjia on 08/02/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //1
    int age = 23, height = 180, weight = 60;
    printf("1. 我的年龄是%d岁, 我的身高是%d, 我的体重是%dKg.\n", age, height, weight);
    
    //2
    int age2 = 28;
    float gongZi = 7600.33f;
    printf("2. 大家好，我今天%d岁了，我的工资是%.2f元。\n", age2, gongZi);
    
    //3
    int age3 = 18;
    age3 = 20;
    printf("3. 我的实际年龄是%d岁。\n", age3);
    
    //4
    int phoneCode = 998, price = 1500;
    float weight4 = 0.3f;
    printf("4. 我的手机型号：%d\t价格：%d元\t重量：%.1fKg.\n", phoneCode, price, weight4);
    
    //5
    int num = 7;
    printf("5. 八位数数字：%08d\n", num);
    
    //6
    double doubleNum = 2.3234234;
    printf("6. 小数部分指数粗小数点后2位的double类型数据：%.2lf。\n", doubleNum);
    
    // 7
    int num7 = 1.1;
    printf("7. 不合法的int类型数据：%d\t", num7);
    char ch = 'a';
    printf("不合法的char类型值：%c\n", ch);
    
    
    return 0;
}
