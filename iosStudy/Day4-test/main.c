//
//  main.c
//  Day4-test
//
//  Created by chengjia on 15/02/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /**
    // 定义1个变量year 保存年份
    // 写一个表达式，判断这个年份是不是闰年
    // 满足如下两个条件之一，那么年份就是闰年
    // 1）年份可以被400整除
    // 2) 年份可以被4整除，但是不能被100整除
    
    // 定义变量存储年份
    int year;
    // 提示用户输入年份
    printf("请输入年份：");
    // 用户输入
    scanf("%d", &year);
    // 判断是否满足，并存储结果
    int b1 = year%400 == 0;
    // 判断是否满足条件二, 并存储结果
    int is4 = year%4 == 0;
    int is100 = year%100>0;
    int b2 = is4 && is100;
    // 判断是否满足其中一个, 并存储结果
    int lastb = b1 || b2;
    // 输出是否是闰年
    if (lastb > 0) {
        printf("%d是闰年\n", year);
    } else {
        printf("%d不是闰年\n", year);
    }
    */
    
    
    /**
     2. 请用户输入小明的语文成绩和数学成绩，输出一下判断的结果
        1）两门成绩都大于90分
        2）任意一门成绩大于90分
     */
    /**
     
    // 。定义变量存储语文成绩和数学成绩
    // 。判断是否都大于90分
    // 。判断是否任意一门成绩大于90分
    float yuwen, shuxue;
    printf("请输入语文数学成绩，用空格隔开：\n");
    scanf("%f%f", &yuwen, &shuxue);
    int res1 = yuwen > 90 && shuxue > 90;
    int res2 = yuwen > 90 || shuxue > 90;
    printf("res1=%d,res2=%d\n", res1, res2);
    return 0;
     */
    
    /**
     3. 请用户输入他儿子的语文 数学 英语成绩，如果平均分及格 >= 60 将奖励1个吻。
     */
    /**
     
//    分析：
//    1. 定义变量存储语文、数学、英语成绩
    float chinese, shuxue, english;
//    2. 提示用户输入
    printf("请依次输入您儿子的语文 数学 英语成绩，用空格隔开\n");
//    3. 用户输入
    scanf("%f%f%f", &chinese, &shuxue, &english);
//    4. 计算平均分
    float average = (chinese + shuxue + english)/3;
//    5. 判断输出1个吻
    if (average >= 60) {
        printf("平均分是%.2f, 奖励您一个吻\n", average);
    }
     */
    
    /**
     4. 请用户输入他儿子的语文 数学 英语成绩，只要有1门不及格，打死，否则吻一个。
     */
    /**
    //定义变量存储语文 数学 英语成绩
    float chinese, shuxue, english;
    // 提示用户输入
    printf("请依次输入您儿子的语文 数学 英语成绩，用空格隔开\n");
    // 用户输入
    scanf("%f%f%f", &chinese, &shuxue, &english);
    // 判断“只要有1门不及格，打死，否则吻一个。”
    if (chinese < 60 || shuxue < 60 || english < 60) {
        printf("打死\n");
    } else {
        printf("吻一个\n");
    }
     */
    
    /**
     5. 请用户输入自己的年龄和性别，1代表男，2代表女
        如果性别是女的，就直接显示 你妈妈喊你回家吃饭
        否则：再判断是否成年，如果成年，就显示 给你点刺激的东西看，否则：你妈妈喊你回家吃饭。
     */
    
    // 定义变量存储年龄 性别
    int age, sex;
    printf("请输入您的年龄和性别（1代表男，2代表女），用空格分开\n");
    scanf("%d%d", &age, &sex);
    // 判断是否女的
    if (sex == 2) {
        printf("你妈妈喊你回家吃饭\n");
    }
    // 判断是否成年
    else if (age >= 18) {
        printf("给你点刺激的东西看\n");
    }
    else {
        printf("你妈妈喊你回家吃饭\n");
    }
    
    
    
}
