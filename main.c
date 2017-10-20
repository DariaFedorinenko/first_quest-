//
//  main.c
//  lab 2b
//
//  Created by dasha on 25.09.17.
//  Copyright © 2017 dasha. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    double A, B, fault, step,suma,suma2;
    int n;
    printf(" a : \t");
    scanf("%lf", &A);
    printf(" b : \t");
    scanf("%lf", &B);
    printf(" d : \t");
    scanf("%lf", &fault);
    printf(" h : \t");
    scanf("%lf", &step);
    printf("\nResults:\n\t");
    double x;
    for (x = A; x <= B; x += step) {
        suma2 = n = 1;
        suma = 0;
        do {
            n++;
            suma2 = -(pow(x,n)/n);
            suma += suma2;
            n++;
        }
        while (fabs((suma2) > fault)) ;
        printf("\t");
        printf("\n  x : %lf",x);
        printf("\t y : %lf", suma);
         printf("\t y : %lf", suma2);
    }
    return 0;
}



