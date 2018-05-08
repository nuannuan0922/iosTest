//
//  main.c
//  Day9-homework
//
//  Created by chengjia on 17/03/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include <stdio.h>
#include "arrUtils.h"
#include "eighthAnswer.h"
#include "nighthAnswer.h"
#include "twelthAnswer.h"

int main(int argc, const char * argv[]) {
    int arr[] = {23, 34, 12, 34, 45, 23, 89, 34, -23, 34};
    int len = sizeof(arr)/sizeof(int);
    int max = getArrMax(arr, len);
    printf("max = %d\n", max);
    
    int min = getArrMin(arr, len);
    printf("min = %d\n", min);
    
    int sum = getArrSum(arr, len);
    printf("sum = %d\n", sum);
    
    float avr = getArrAvr(arr, len);
    printf("avr = %.2f\n", avr);
    
    int index = getIndexByElement(arr, len, 34);
    printf("index = %d\n", index);
    
    int isContains = contains(arr, len, 23);
    if (isContains >= 0) {
        printf("数组中包含元素.\n");
    } else {
        printf("数组中不包含元素.\n");
    }
    
    getEighthAnswer();
    
    getNighthAnswer();
    
    getTwelthAnswer();
    
    return 0;
}
