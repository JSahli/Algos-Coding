//
//  main.c
//  AlgosCoding17Bh
//
//  Created by Jesse Sahli on 4/26/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

// Tail Recursion

int addExponentUntil(int start, int finish, int answer){
    
    if(start > finish){
        return answer;
    } else {
        return addExponentUntil(start + 1, finish, (start * start) + answer);
    }
}

// Normal Recursion

int addExponentUpTo(int start, int finish){
    
    if(start > finish){
        return 0;
    } else {
        return start*start + addExponentUpTo(start + 1, finish);
    }
}


int main(int argc, const char * argv[]) {
  
    printf("%d\n", addExponentUntil(1, 100, 0));
    printf("%d\n", addExponentUpTo(1, 100));
    
    
    return 0;
}
