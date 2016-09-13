//
//  main.c
//  AlgosCodingQ12
//
//  Created by Jesse Sahli on 4/11/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    for (int x = 1; x < 101; x++) {
        if (x % 3 == 0 && x % 5 ==0) {
            printf("%d FizzBuzz\n", x);
        } else if (x % 3 == 0) {
            printf("%d Fizz\n", x);
        } else if (x % 5 == 0) {
            printf("%d Buzz\n", x);
        }
    }
    
    return 0;
}
