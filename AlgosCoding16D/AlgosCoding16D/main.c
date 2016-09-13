//
//  main.c
//  AlgosCoding16D
//
//  Created by Jesse Sahli on 4/25/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

//BUBBLE SORT ALGORITHM 

int main(int argc, const char * argv[]) {
    
    int array[100], n, a, b, temp;
    
    printf("Enter number of elements\n");
    scanf("%d", &n);
    
    printf("Enter %d integers\n", n);
    
    for (a = 0; a < n; a++) {
        scanf("%d", &array[a]);
    }
    
    
    for (a = 0; a < (n - 1); a++){
        
        int stop = 1; // adding this "stop" to prevent redundant scans through the array once sorted
        
        for (b = 0; b < ( n - 1 - a); b++) {
            
            if (array[b] > array[b+1]) {
                temp = array[b];
                array[b] = array[b+1];
                array[b+1] = temp;
                
                stop = 0;
            } // end of if statement
        } // end of inner for loop
        
        if(stop == 1){
            break;
        } // end of if statement
        
    } // end of outer for loop
    
    printf("The array after bubble sort algorithm: ");
    
    for(a = 0; a < n; a++){
        printf("%d ", array[a]);
    }
    
    
    printf("\n");
    
    
    
    
    return 0;
}