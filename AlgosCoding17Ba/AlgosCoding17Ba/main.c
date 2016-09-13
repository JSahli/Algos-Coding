//
//  main.c
//  AlgosCoding17Ba
//
//  Created by Jesse Sahli on 4/26/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

// where x denotes your starting point and limit denotes the endpoint

void fizzBuzz(x, limit){
    
    if(x % 3 == 0 && x % 5 == 0){
        printf("%d fizzbuzz\n", x);
    } else if(x % 3 == 0){
        printf("%d fizz\n", x);
    } else if (x % 5 == 0){
        printf("%d buzz\n", x);
    }
    
    if(x < limit) {
        fizzBuzz(x + 1, limit);
    }
    
    return;
}


int main(int argc, const char * argv[]) {
   
    fizzBuzz(1, 100);

    
    
    return 0;
}
