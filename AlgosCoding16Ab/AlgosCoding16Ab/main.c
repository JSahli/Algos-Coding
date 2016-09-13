//
//  main.c
//  AlgosCoding16Ab
//
//  Created by Jesse Sahli on 4/25/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

// SWAPPING INTEGERS WITHOUT USING A TEMP VARIABLE

int main(int argc, const char * argv[]) {
   
    int x = 463;
    int y = 121;
    
    x = x + y;
    y = x - y;
    x = x - y;
    
    printf("The value of x is now %d, and the value of y is now %d \n", x, y);
    
    
    return 0;
}
