//
//  main.c
//  Day9-test
//
//  Created by chengjia on 17/03/2018.
//  Copyright © 2018 chengjia. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float arr[5] = {0};
    for (int i = 0; i < sizeof(arr)/sizeof(float); i++) {
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < sizeof(arr)/sizeof(float); i++) {
        printf("%.2f\t", arr[i]);
    }
    printf("\n");
    return 0;
}
