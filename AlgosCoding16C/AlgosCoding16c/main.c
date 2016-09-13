//
//  main.c
//  AlgosCoding16c
//
//  Created by Jesse Sahli on 4/25/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

//ALGOSCODING 16Cb (bubble sort alogorithm creates a sorted array of N numbers

int main(int argc, const char * argv[]) {
   
    int array[100], n, a, b, temp;
    
    printf("Enter number of elements in the array\n");
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
    
    
    
    // THE NEXT PART OF THE PROGRAM IS ALGOS N CODING Q16Cc.. using binary search algo to find a specific number in the sorted array
    
    int search;
    
    printf("Enter the number you are looking for: ");
    scanf("%d", &search);
    
    int first = 0;
    int last = n - 1;
    int middle = (first + last) / 2;
    
    int found = 0;
    
    while(found == 0){
        if(array[middle] == search) {
            found = 1;
            printf("\n The number you are looking for was found at position %d in the array \n", middle);
        } else if(search > array[middle]) {
            first = middle + 1;
            middle = (first + last) / 2;
        } else if(search < array[middle]) {
            last = middle - 1;
            middle = (first + last) / 2;
        }
        
        if(first >= last){
            printf("The number you searched for was not found\n");
            break;
        }
    } //end of while loop
    
    return 0;
}

// ALGOS&CODING 16Dd. In an array with 1024 elements, it will take about 10 step before the search is complete.

// ALGOS&CODING 16De. If the array has N elements, it will take (log(BASE 2) N + 1) steps to complete the search in a worst case scenario.




    
    
    











