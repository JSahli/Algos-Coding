//
//  main.c
//  AlgosCoding 16Ac
//
//  Created by Jesse Sahli on 4/25/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

// SWAPPING INTEGERS USING BIT SHIFT OPERATORS

int main(int argc, const char * argv[]) {
    
    int x = 13;
    int y = 21;
    
    x = x ^ y; 
    y = x ^ y;
    x = x ^ y;
    
    
    printf("The value of x is now %d, and the value of y is now %d \n", x, y);
    
    return 0;
}
