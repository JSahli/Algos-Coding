//
//  main.c
//  AlgosCoding16B
//
//  Created by Jesse Sahli on 4/25/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>


//Function to find the nth power of an integer


int findToThePower(base, exponent){
    
    int product = base;
    
    for(int x = exponent; x > 1; x--){
        product = product * base;
    }
    
    return product;
}



int main(int argc, const char * argv[]) {
    
    printf("%d \n", findToThePower(4, 4));
    
    return 0;
}
