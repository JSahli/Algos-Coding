//
//  main.c
//  AlgosCoding14NestedLoops
//
//  Created by Jesse Sahli on 4/12/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int sum = 0;
    
    for (int a = 1; a <= 100; a++) {
        
        for(int b = 1; b <= 50; b++) {
            sum = sum + (a * b);
        }
    }
    printf("S is equal to %d/n", sum);
    
    return 0;
}
