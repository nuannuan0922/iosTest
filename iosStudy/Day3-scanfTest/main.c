//
//  main.c
//  Day3-scanfTest
//
//  Created by chengjia on 12/02/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    // 1. 用户输入衣服数
//    int numOfTrouthers;
//    printf("请输入衣服数：");
//    scanf("%d", &numOfTrouthers);
//    // 2. 用户输入裤子数
//    int numOfKuZi;
//    printf("请输入裤子数：");
//    scanf("%d", &numOfKuZi);
//    // 3. 打印应付多少钱
//    printf("应付价格为：%.2f\n", 120.88 * numOfTrouthers + 89.9 * numOfKuZi);
//    // 4. 打印打折后价格
//    printf("88折后应付价格为：%.2f\n", 120.88 * 0.88 * numOfTrouthers + 89.9 * 0.88 * numOfKuZi);
    
    
    /**
     第二种方法：
     目的：练习scanf输入多个值。
     */
    // 1. 定义变量存储衣服数和裤子数
    int numOfKuzi, numOfYiFu;
    // 2. 提示输入
    printf("请先输入衣服数，后输入裤子数：\n");
    // 3. 让用户输入
    scanf("%d%d", &numOfYiFu, &numOfKuzi);
    
    // 3. 打印应付多少钱
    printf("应付价格为：%.2f\n", 120.88 * numOfYiFu + 89.9 * numOfKuzi);
    // 4. 打印打折后价格
    printf("88折后应付价格为：%.2f\n", 120.88 * 0.88 * numOfYiFu + 89.9 * 0.88 * numOfKuzi);
    
    return 0;
}
