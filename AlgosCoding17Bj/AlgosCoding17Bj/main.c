//
//  main.c
//  AlgosCoding 17Bj
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
        return addFractionUntil(start + 4, finish, answer + 1/(start * (start + 2)));
    }
}


// Recursion

float addFractionUpTo(float start, float finish){
    
    if(start >= finish){
        return 0;
    } else {
        return 1/(start * (start + 2)) + addFractionUpTo(start + 4, finish);
    }
}



int main(int argc, const char * argv[]) {
    
    printf("%f\n", addFractionUntil(3, 97, 0));
    printf("%f\n", addFractionUpTo(3, 97));
    

    return 0;
}
