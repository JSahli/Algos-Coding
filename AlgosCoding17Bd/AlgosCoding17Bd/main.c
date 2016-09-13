//
//  main.c
//  AlgosCoding17Bd
//
//  Created by Jesse Sahli on 4/26/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>


void fahrToCelc(upper,lower ){
    
    float celcius;
    float fahr;
    
    fahr = upper;
    
    celcius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celcius);
    
    fahr -= 1;
    
    if(fahr >= lower){
        fahrToCelc(fahr, lower);
    }
    return;
}


int main(int argc, const char * argv[]) {
    
    fahrToCelc(100, -40);
    
    
    return 0;
}
