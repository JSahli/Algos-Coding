//
//  main.c
//  AlgosCoding15jPART1
//
//  Created by Jesse Sahli on 4/20/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char countryString[] = "USA, Canada, Mexico, Grenada, Belize";
    int noOfDelimiters = 1;
    char **countryArray;
    int a = 0;
    int b = 0;
    int c = 0;
    char delimiter = ',';
    
    //Finding the number of delimiters in the string (noOfDelimiters set to 1 for '\0' character)
    
    for(a = 0; countryString[a] != '\0'; a++){
        if(countryString[a] == delimiter){
                noOfDelimiters++;}
        }
    
    //Setting the amount of strings that the array can hold based on delimiters with malloc
    
    countryArray = malloc(sizeof(char*) * noOfDelimiters);
    
    //Setting the amount of characters each string in our array can have with a loop and malloc
    
    for(int d = 0; countryString[d] != '\0'; d++){
        if(countryString[d] == delimiter){
            countryArray[b] = malloc(sizeof(char) * (c + 1));
            c = 0;
            b++;
            d++;
        } else {
            c++;
        }
    }
    countryArray[b] = malloc(sizeof(char)* (c+1));
    
    
    //just to check if our malloc'd string sizes are correct
    
    countryArray[0][3] = 'x';
    countryArray[0][4] = 'x';
    countryArray[0][5] = 'x';
    
    
    //assigning the string into seperate array elements based on the delimiter
    
    
    int i = 0;
    int j = 0;
    int k = 0;
    
    for(i = 0; countryString[i] != '\0'; i++){
        if(countryString[i] == delimiter){
            countryArray[j][k] = '\0';
            j++;
            i += 1;
            k = 0;
        } else {
            countryArray[j][k] = countryString[i];
            k++;
        }
    }
    countryArray[j][k] = '\0';
    
    printf("%s", countryArray[j]);
    printf("\n");
    printf("\n");
    
    for (int x = 0; x < noOfDelimiters; x++) {
        printf("%s\n", countryArray[x]);
    }
    
    printf("\n");

    
    free(countryArray);
    
    
    
    return 0;
}
