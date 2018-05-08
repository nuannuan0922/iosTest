//
//  nighthAnswer.c
//  Day9-homework
//
//  Created by chengjia on 17/03/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include "nighthAnswer.h"
#include "arrUtils.h"

void getNighthAnswer() {
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(int);
    int tmp;
    for (int i = 0; i < len/2; i++) {
        tmp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = tmp;
    }
    printfArr(arr, len);
}
