//
//  main.c
//  AlgosCoding13a
//
//  Created by Jesse Sahli on 4/12/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    double s = .5;
    double n = 2;
    
    while(s <= 4) {
        n++;
        s = s + 1/n;
        
    }
    
    printf("n is equal is %f", n);
    
    return 0;
}
