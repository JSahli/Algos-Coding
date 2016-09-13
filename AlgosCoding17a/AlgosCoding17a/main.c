//
//  main.c
//  AlgosCoding17a
//
//  Created by Jesse Sahli on 4/25/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

// Tail Recursion

long unsigned factorial(long unsigned x, long unsigned answer){
    if(x == 1){
        return answer;
    } else {
        return factorial(x - 1, (x * answer));
    }
}

// Recursion

int factorialN(int x){
    if(x == 1){
        return 1;
    } else {
        return x * factorialN(x - 1);
    }
}



int main(int argc, const char * argv[]) {
   
    printf("%lu\n", factorial(5,1));
    
    printf("%d\n", factorialN(5));
    
    return 0;
}
