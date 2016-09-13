//
//  main.c
//  AlgosCoding12h
//
//  Created by Jesse Sahli on 4/12/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    int s = 0;
    for(int i = 1; i <= 100; i++) {
        
        s = s + (i*i);
    }
    
    printf("s is equal to %d\n", s);
    
    return 0;
}
