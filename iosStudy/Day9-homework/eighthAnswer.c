//
//  eighthAnswer.c
//  Day9-homework
//
//  Created by chengjia on 17/03/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include "eighthAnswer.h"
#include "arrUtils.h"

void getEighthAnswer() {
    int len;
    printf("请输入人数：");
    scanf("%d", &len);
    int arr[len];
    for(int i = 0; i < len; i++) {
        printf("请输入第%d个学生的成绩：", i);
        scanf("%d", &arr[i]);
    }
    int sum = getArrSum(arr, len);
    float avr = getArrAvr(arr, len);
    int max = getArrMax(arr, len);
    int min = getArrMin(arr, len);
    
    float avr2 = (sum - max - min) * 1.0 / len;
    
    printf("sum = %d, avr = %.2f, avr2 = %.2f\n", sum, avr, avr2);
}
