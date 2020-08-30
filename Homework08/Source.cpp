#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main() {
    int i, sum = 0;
    for (i = 1; i <= 1000; i++) {
        sum = sum + i;
    }
    printf("summation of : ");
    printf("1+2+3+...+1000 = %d", sum);
    return 0;
}