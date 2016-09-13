//
//  main.c
//  AlgosCoding15a
//
//  Created by Jesse Sahli on 4/14/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

void areTheyEqual(char *string1, char *string2){
    if (string1 == string2) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return;
}

int main(int argc, const char * argv[]) {

    areTheyEqual("Yes", "No");
    
    
    return 0;
}
