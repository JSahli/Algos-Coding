//
//  main.c
//  AlgosCoding12j
//
//  Created by Jesse Sahli on 4/12/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    float s = 0;
    
    for(float i = 3; i <= 95; i += 4){
        
        s = s + (1 / (i * (i + 2)));
    }
    
    printf("s is equal to %f\n", s);
    
    return 0;
}
