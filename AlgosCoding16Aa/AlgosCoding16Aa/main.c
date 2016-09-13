//
//  main.c
//  AlgosCoding16Aa
//
//  Created by Jesse Sahli on 4/25/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

// SWAPPING TWO INTEGERS USING A TEMP VARIABLE

int main(int argc, const char * argv[]) {
    
    
    int x = 3;
    int y = 8;
    int temp;
    
    temp = x;
    x = y;
    y = temp;
    
    
    printf("The value of x is now %d, and the value of y is now %d \n", x, y);
    
    
    return 0;
}
