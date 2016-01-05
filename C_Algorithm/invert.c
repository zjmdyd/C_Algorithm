//
//  invert.c
//  C_Algorithm
//
//  Created by zjw on 12/30/15.
//  Copyright © 2015 YunTu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

void revert(char *ch, char[]);

int main(void) {
    char *chs = "1100";
    char str[strlen(chs)];
    printf("%s\n", chs);
    revert(chs, str);
    
    printf("%s\n", str);
}

void revert(char *chs, char str[]) {
    int length = (int)strlen(chs);
    
    for (int i = 0; i < length; i++) {
        char str3 = *(chs + length - i - 1);
        str[i] = str3;
        printf("%c\n", str3);
        if (i == length - 1) {
            str[i+1] = '\0';
        }
    }
}



