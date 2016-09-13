//
//  main.c
//  AlgosCoding13B
//
//  Created by Jesse Sahli on 4/12/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
   
    double s = 0;
    double n = 1;
    double i = 0;
    
    while( s < 3.141592) {
        
        i = i + (1 / (n * n));
        s = sqrt(6 * i);
        n++;
    }
    printf("n is equal to %f\n", n);
    printf("s is equal to %f\n", s);
    
    return 0;
}
