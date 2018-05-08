//
//  main.c
//  Day5-test
//
//  Created by chengjia on 17/02/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    /**
     int weekday = 0;
     printf("请输入数字的星期天：\n");
     scanf("%d", &weekday);
     switch (weekday) {
         case 1: printf("星期一"); break;
         case 2: printf("星期二"); break;
         case 3: printf("星期三"); break;
         case 4: printf("星期四"); break;
         case 5: printf("星期五"); break;
         case 6: printf("星期六"); break;
         case 7: printf("星期日"); break;
         default: printf("火星");  break;
     }
     */
    
    int num;
    int count = 0;
    while(count < 10) {
        count++;
        num = arc4random_uniform(10) + 1;
        if (num%2 == 0) {
            printf("%d \t是偶数\n", num);
        } else {
            printf("%d \t是奇数\n", num);
        }
    }
}
