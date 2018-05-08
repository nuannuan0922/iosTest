//
//  twelthAnswer.c
//  Day9-homework
//
//  Created by chengjia on 17/03/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include "twelthAnswer.h"
#include <stdlib.h>
#include "arrUtils.h"
#define LEN 20

void getTwelthAnswer() {
    int arr[LEN];
    for (int i = 0; i < LEN; i++) {
        arr[i] = arc4random_uniform(41)+10;
    }
    printfArr(arr, LEN);
}
