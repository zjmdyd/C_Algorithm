//
//  commonMultiple.c
//  C_Algorithm
//
//  Created by YunTu on 15/8/31.
//  Copyright (c) 2015年 YunTu. All rights reserved.
//

#include <stdio.h>

int minCommonMutiple(int *, int *);
void reduction(int *, int *);

/*
    求两个分数的和,结果为最简分数:
    思路:
        1.求分母的最小公倍数
        2.求分子之和 ----> 分式之和(繁分式)
        3.化简 ----> 最简分式
 */
int main(void) {    
     // 通分
     int a, b, c, d;
     printf("请输入两个分数中间用空格分开:");
     scanf("%d/%d %d/%d", &a, &b, &c, &d);  // a/b c/d
     
     int e = minCommonMutiple(&b, &d);  // 求最小公倍数 ----> 得出分母
     a = a*d;
     c = c*b;
     
     int f = a+c;               // 分子之和
    
     reduction(&f, &e);         // 分子分母化简 ----> 最简分数
     
     printf("合式 = %d/%d\n", f, e);
    
    return 0;
}

#pragma mark - 最小公倍数

int minCommonMutiple(int *m, int *n) {
    int k = 1;
    for (int i = 2; i < *m && i < *n; i++) {
        if (*m%i  == 0 && *n%i == 0) {
            k *= i;
            *m /= i;
            *n /= i;
            i = 1;
        }
    }
    
    return k * *m * *n;
}

#pragma mark - 约分

void reduction(int *m, int *n) {
    for (int i = 2; i < *m && i < *n; i++) {
        if (*m%i  == 0 && *n%i == 0) {
            *m /= i;
            *n /= i;
            i = 1;
        }
    }
}
