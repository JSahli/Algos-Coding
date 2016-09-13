//
//  main.c
//  AlgosCodingQ12d
//
//  Created by Jesse Sahli on 4/12/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float fahr, celcius, lower, upper;
    
    lower = -40;
    upper = 100;
    
    fahr = upper;
    while (fahr >= lower) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr -= 1;
    }
    return 0;
}
