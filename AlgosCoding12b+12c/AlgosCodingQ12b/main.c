//
//  main.c
//  AlgosCodingQ12b
//
//  Created by Jesse Sahli on 4/11/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    float fahr, celcius, lower, upper;
    
    lower = -40;
    upper = 100;
    
    printf("Fahrenheit Celcius\n");
    
    fahr = lower;
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f \t %6.1f\n", fahr, celcius);
        fahr = fahr + 1;
    }
    
    return 0;

}
