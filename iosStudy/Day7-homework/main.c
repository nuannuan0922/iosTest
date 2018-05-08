//
//  main.c
//  Day7-homework
//
//  Created by chengjia on 01/03/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include <stdio.h>
int getMax(int num1, int num2);
int siSheWuRu(float num);
int isChengNian(int age);
int isRun(int year);
int getDayLong(int year, int month);

int main(int argc, const char * argv[]) {
    // insert code here...
    int max = getMax(12, -5);
    printf("第一题： max = %d\n", max);
    
    int zhengShu = siSheWuRu(23.5345);
    printf("第二题： zhengShu = %d\n", zhengShu);
    
    int isCheng = isChengNian(17);
    printf("第三题：");
    if (!isCheng) {
        printf("没有成年\n");
    } else {
        printf("已经成年\n");
    }
    
    int year = 2016;
    int isRunNian = isRun(year);
    printf("第四题：%d 年", year);
    if (isRunNian) {
        printf("是闰年\n");
    } else {
        printf("不是闰年\n");
    }
    
    int day = getDayLong(2016, 4);
    printf("第五题：天数是 %d\n", day);
    return 0;
}

int getDayLong(int year, int month) {
    int isRunNian = isRun(year);
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if (isRunNian) {
                return 29;
            } else {
                return 28;
            }
        default:
            return 0;
    }
}

int isRun(int year) {
    return year%400 == 0 || (year%4 == 0 && year%100 != 0);
}

int getMax(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int siSheWuRu(float num) {
    int zhengShu = num;
    float xiaoShu = num - zhengShu;
    return xiaoShu < 0.5 ? zhengShu : zhengShu + 1;
}

int isChengNian(int age) {
    return age >= 18;
}
