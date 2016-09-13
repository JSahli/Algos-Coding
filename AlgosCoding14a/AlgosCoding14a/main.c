//
//  main.c
//  AlgosCoding14a
//
//  Created by Jesse Sahli on 4/13/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int myArray[3] = {1, 2, 3};
    int i;
    
    for(i = 0; i < 3; i++) {
        
        for(int j = 0; j < 3; j++) {
            
            for(int k = 0; k < 3; k++) {
                
                // is there a more elegant way to write conditional in this next step? //
            
            if (i != j && i != k && j != k) {
                printf(" %d %d %d\n",myArray[i],myArray[j], myArray[k]);
            }
            }
        }
    }    return 0;
}
