//
//  prime.c
//  C_Algorithm
//
//  Created by YunTu on 15/8/31.
//  Copyright (c) 2015年 YunTu. All rights reserved.
//

#include <stdio.h>

int getPrimeNumber(int count, int *arr);

int main(void) {
    int arr[] = {1, 2, 3, 4, 7, 9, 11, 8, 13, 24, 17, 1};
    int count = sizeof(arr)/sizeof(int);
    printf("num = %d\n", getPrimeNumber(count, arr));

    return 0;
}

// 求素数的个数
int getPrimeNumber(int count, int *arr) {
    int num = 0;
    for (int i = 0; i < count; i++) {
        int t = arr[i];
        if(t == 1) num++;
        
        /*
            思路:
                1.首先求出不是素数的个数
                2.总个数减去非素数的个数得出素数的个数
         */
        for (int j = 2; j < t; j++) {   // t从3开始(因为2不是 非素数)
            if (t % j == 0) {
                num++;
                break;
            }
        }
    }
    return count - num;
}