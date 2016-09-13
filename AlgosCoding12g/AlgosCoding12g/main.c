//
//  main.c
//  AlgosCoding12g
//
//  Created by Jesse Sahli on 4/12/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    float s = 0;
    
    for(float i = 2; i <= 100; i++) {
        
        s = s + (1/i);
        printf("s is equal to %f.2\n", s);
    }
    
    return 0;
}
