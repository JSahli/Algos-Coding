//
//  main.c
//  AlgosCoding17Bg
//
//  Created by Jesse Sahli on 4/26/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

// Tail Recursion

float addUntil(float start, float finish, float answer){

    if(start > finish){
        return answer;
    } else {
        return addUntil(start + 1, finish, (1/start) + answer);
    }
    
}

// Normal Recursion

float addUpTo(float start, float finish){
    
    if(start > finish){
        return 0;
    } else {
        return (1/start) + addUpTo(start + 1, finish);
    }
}



int main(int argc, const char * argv[]) {
    
    printf("%f\n", addUntil(2, 100, 0));
    printf("%f\n", addUpTo(2, 100));
    
    return 0;
}