//
//  arrUtils.c
//  Day9-homework
//
//  Created by chengjia on 17/03/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include "arrUtils.h"

int getArrMax(int arr[], int len) {
    int max = INT8_MIN;
    for (int i = 0; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int getArrMin(int arr[], int len) {
    int min = INT8_MAX;
    for (int i = 0; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int getArrSum(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

double getArrAvr(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    double avr = sum*1.0/len;
    return avr;
}
int getIndexByElement(int arr[], int len, int ele) {
    int index = -1;
    for (int i = 0; i < len; i++) {
        if (arr[i] == ele) {
            return i;
        }
    }
    return index;
}

int contains(int arr[], int len, int ele) {
    int index = -1;
    for (int i = 0; i < len; i++) {
        if (arr[i] == ele) {
            return i;
        }
    }
    return index;
}

void printfArr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
