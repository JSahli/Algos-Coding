//
//  main.c
//  AlgosCoding14b
//
//  Created by Jesse Sahli on 4/13/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int array1[3][3] = {
        { 1, 2, 3 },
        { 3, 2, 1 },
        { 2, 1, 3 }
    };
    int array2[3][3] = {
        { 4, 5, 6},
        { 6, 5, 4},
        { 4, 6, 5}
    };
    int arrayProduct[3][3] = {
        { 0, 0, 0},
        { 0, 0, 0},
        { 0, 0, 0}
    };
        
    int i, j ,k;
    
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                arrayProduct[i][j] += array1[i][k] * array2[k][j];
            }
        }
    };
    
    int x, y;
    
    for(x = 0; x < 3; x++){
        for(y = 0; y < 3; y++){
    printf(" %d \t", arrayProduct[x][y]);
        } printf("\n");
    };
    
    
 

    
    
    return 0;
}






