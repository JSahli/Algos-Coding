//
//  main.c
//  AlgosCoding17Bf
//
//  Created by Jesse Sahli on 4/26/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

// Tail Recursion

int subtractUntil(int start, int finish, int answer){
    
    if(start < finish){
        return answer;
    } else {
        return subtractUntil(start - 1, finish, answer + start);
    }
    
}

// Normal Recursion

int subtractUpTo(int start, int finish){
    
    if(start < finish){
        return 0;
    } else {
        return start + subtractUpTo(start - 1, finish);
    }
}


int main(int argc, const char * argv[]) {
    
    printf("%d\n", subtractUntil(0, -200, 0));
    printf("%d\n", subtractUpTo(0, -200));
    
    
    return 0;
}
