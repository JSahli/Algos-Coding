//
//  main.c
//  AlgosCoding17Bb
//
//  Created by Jesse Sahli on 4/26/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

void fahrToCelc(lower, upper){
    
    float celcius;
    float fahr;
    
    fahr = lower;
    
    celcius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celcius);

    fahr = fahr + 1;

    if(fahr <= upper){
        fahrToCelc(fahr, upper);
    }
    return;
}
    
int main(int argc, const char * argv[]) {
  
    fahrToCelc(-40, 100);
    
    
    return 0;
}
