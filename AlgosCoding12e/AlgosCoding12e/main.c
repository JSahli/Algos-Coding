//
//  main.c
//  AlgosCoding12e
//
//  Created by Jesse Sahli on 4/12/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int s = 0;
    
    for(int step = 1; step <= 100; step++) {
        s = s + step;
    }
    
    printf("The sum is %d\n",s);
    
    return 0;
}
