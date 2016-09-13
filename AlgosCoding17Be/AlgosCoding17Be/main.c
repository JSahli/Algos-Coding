//
//  main.c
//  AlgosCoding17Be
//
//  Created by Jesse Sahli on 4/26/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

//Tail Recursion

int addUntil(int start, int finish, int answer){
    
    if(start > finish){
        return answer;
    } else {
        return addUntil(1 + start, finish, start + answer);
    }
}

//Normal Recursion

int addUpTo(int start, int finish){
    
    if(start > finish){
        return 0;
    } else {
        return start + addUpTo(1 + start, finish);
    }
}

int main(int argc, const char * argv[]) {
    
    
    printf("%d\n",addUntil(1, 100, 0));
    printf("%d\n",addUpTo(1, 100));
    
    return 0;
}
