#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <iostream>



int main() {
    double i;
    printf("for(i = 0; abs(i-10) <= 0.0000001; i += 0.1):\n");
    for(i = 0; fabs(i-10) > 0.0000001; i += 0.1){
        printf("%.1f\t", i);
        if(i > 11){
            printf("Oh my god!!!\n");
            break;
        }
    }

    printf("\n\nfor(i = 0; i <= 10; i += 0.1):\n");
    for(i = 0; i != 10; i += 0.1){
        printf("%.1f\t", i);
        if(i > 11){
            printf("\nOH MY GOD!!!STOP!!!\n");
            break;
        }
    }
 
    return 0;
}
