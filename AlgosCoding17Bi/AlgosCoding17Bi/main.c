//
//  main.c
//  AlgosCoding17Bi
//
//  Created by Jesse Sahli on 4/26/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

// Tail Recursion

float addFractionUntil(float start, float finish, float answer){
    
    if(start >= finish){
        return answer;
    } else {
        return addFractionUntil(start + 1, finish, answer + 1/(start * (start + 1)));
    }
}


// Recursion

float addFractionUpTo(float start, float finish){
    
    if(start >= finish){
        return 0;
    } else {
        return 1/(start * (start + 1)) + addFractionUpTo(start + 1, finish);
    }
}




int main(int argc, const char * argv[]) {

    printf("%.2f\n", addFractionUntil(2, 100, 0));
    printf("%.2f\n", addFractionUpTo(2, 100));
    
    
    return 0;
}
