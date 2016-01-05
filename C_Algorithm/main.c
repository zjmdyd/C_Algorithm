//
//  main.c
//  C_Algorithm
//
//  Created by YunTu on 15/8/29.
//  Copyright (c) 2015年 YunTu. All rights reserved.
//

#include <stdio.h>

int fun(int i);

int main(int argc, const char * argv[]) {    
    for (int i = 0; i < 1025; i++) {
        int k = fun(i);
        if (k != 0) {
            printf("i = %d  ", fun(i));
        }
    }
    printf("\n");    
    
    return 0;
}

#pragma mark -  用最简单的方法判断一个LONG整形的数A是2^n（2的n次方)

int fun(int i) {
    if ((i & (i - 1)) == 0) {
        return i;
    }else {
        return 0;
    }
}

#pragma mark - 两个烧杯，一个放糖一个放盐，用勺子舀一勺糖到盐，搅拌均匀，然后舀一勺混合物会放糖的烧杯，问你两个烧杯哪个杂质多？

