//
//  main.c
//  Day3-homework
//
//  Created by chengjia on 14/02/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
    // 1. 接受用户从键盘上输入的两个字符，然后输出他们
    // 1. 定义变量存储两个字符
    char ch1, ch2;
    // 2. 提示用户输入第一个字符
    printf("请输入第一个字符：\n");
    // 3. 用户输入
    scanf("%c", &ch1);
    rewind(stdin);
    // 4. 提示用户输入第二个字符
    printf("请输入第一个字符：\n");
    // 5. 用户输入
    scanf("%c", &ch2);
    // 4. 输出
    printf("输入的第一个字符是：%c,输入的第二个字符是：%c。\n", ch1, ch2);
     
    
    // 2. 接受用户从键盘上输入的两个双精度浮点数，然后输出他们
    // 1. 定义变量存储两个双精度浮点数
    double f1, f2;
    // 2. 提示用户输入
    printf("请输入两个小数，用空格隔开：\n");
    // 3. 用户输入
    scanf("%lf%lf", &f1, &f2);
    // 4. 输出
    printf("输入的第一个小数是：%lf,输入的第二个小数是：%lf。\n", f1, f2);
     
     
    
    // 3. 接受用户从键盘上输入的两个单精度浮点数，然后输出他们（保留两位小数）
    // 1. 定义变量存储两个单精度浮点数
    float f1, f2;
    // 2. 提示用户输入
    printf("请输入两个小数，用空格隔开：\n");
    // 3. 用户输入
    scanf("%f%f", &f1, &f2);
    // 4. 输出
    printf("输入的第一个小数是：%.2f,输入的第二个小数是：%.2f。\n", f1, f2);
    
    
    // 4. 接受用户从键盘上输入的两个整数，然后输出他们和
    // 1. 定义变量存储两个整数
    int int1, int2;
    // 2. 提示用户输入
    printf("请输入两个整数，用空格隔开：\n");
    // 3. 用户输入
    scanf("%d%d", &int1, &int2);
    // 4. 求和
    int sum = int1 + int2;
    // 4. 输出
    printf("输入整数的和是：%d. 输入的数字分别是：%d, %d. \n", sum, int1, int2);
    
    
    // 11. 几天是几周零几天
    // . 定义一个变量存储天数
    int days;
    // . 提示用户输入
    printf("请输入一个正整数：\n");
    // . 用户输入
    scanf("%d", &days);
    // . 计算周和天并存储
    int week = days/7, day = days%7;
    // . 打印周和天
    printf("%d天是%d周零%d天。\n", days, week, day);
    */
    
    // 12. 请用户从控制台输入1个秒数，求用户输入的秒数是几天几小时几分钟几秒？
    // * 定义一个变量存储秒数
    int initMiao;
    // * 提示用户输入
    printf("请输入秒数：\n");
    // * 用户输入
    scanf("%d", &initMiao);
    // * 计算该秒数是几分零几秒，并存储
    int sumFen = initMiao / 60;
    int lastMiao = initMiao % 60;
    // * 计算分钟是几小时零几分，并存储
    int sumShi = sumFen / 60;
    int lastFen = sumFen % 60;
    // * 计算小时是几天零几小时，并存储
    int lastTian = sumShi / 24;
    int lastShi = sumShi % 24;
    // * 输入几天几小时几分钟几秒
    printf("%d秒是%d天%d时%d分%d秒。\n", initMiao, lastTian, lastShi, lastFen, lastMiao);
    
    return 0;
}
