#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <iostream>


void chap_1_1(){
    printf("%%d,8/5: %d\n", 8/5);
    printf("%%.1f,8.0/5.0: %.1f\n", 8.0/5.0);
    printf("%%.1f,8/5: %.1f\n", 8/5);
    printf("%%d,8.0/5.0: %d\n", 8.0/5.0);
}

void chap_1_5_2(){
    printf("11111*11111: %d\n", 11111*11111);
    printf("111111*111111: %d\n", 111111*111111);
    printf("%%f:11111.0*11111.0: %f\n", 11111.0*11111.0);
    printf("%%f:111111.0*111111.0: %f\n", 111111.0*111111.0);
    printf("%%f:11111111.0*11111111.0: %f\n", 11111111.0*11111111.0);
    printf("sqrt(-4): %f\n", sqrt(-4));
    printf("1.0/0.0: %f\n", 1.0/0.0);
    printf("0.0/0.0: %f\n", 0.0/0.0);
}

void datatypr_min_max(){
    //see /usr/include/limits.h
    printf("INT_MIN:%d\n", INT_MIN);
    printf("INT_MAX:%d\n", INT_MAX);
    printf("UINT_MAX:%u\n", UINT_MAX);
    printf("LONG_MIN:%ld\n", LONG_MIN);
    printf("LONG_MAX:%ld\n", LONG_MAX);
    printf("ULONG_MAX:%lu\n", ULONG_MAX);
    std::cout << "FLT_MIN: " << FLT_MIN << '\n';
    std::cout << "FLT_MAX: " << FLT_MAX << '\n';
    std::cout << "DBL_MIN: " << DBL_MIN << '\n';
    std::cout << "DBL_MAX: " << DBL_MAX << '\n';
}


int main() {
    chap_1_1();
    chap_1_5_2();
    datatypr_min_max();
    return 0;
}
