//
//  main.c
//  AlgosCoding15k
//
//  Created by Jesse Sahli on 4/20/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char countryString[] = "USA. Canada, Mexico. Bermuda Grenada, Belize";
    //    char countryArray[20][20];
    int noOfDelimiters = 1;
    char **countryArray;
    int a = 0;
    int b = 0;
    int c = 0;
    char delimiter = ',', delim1 = '.', delim2 = ' ';
    
    
    
    
    
    
    for(a = 0; countryString[a] != '\0'; a++){
        if(countryString[a] == delimiter || countryString[a] == delim1 || countryString[a] == delim2){
            if(countryString[a-1] != delimiter && countryString[a-1] != delim1 && countryString[a-1] != delim2){
                noOfDelimiters++;
            }
        }
    }
    
    //int jhf = sizeof(char*) * noOfDelimiters;
    
    countryArray = malloc(sizeof(char*) * noOfDelimiters);
    
    for(int d = 0; countryString[d] != '\0'; d++){
        if(countryString[d] == delimiter || countryString[d] == delim1 || countryString[d] == delim2){
            if(countryString[a-1] != delimiter && countryString[a-1] != delim1 && countryString[a-1] != delim2){
                countryArray[b] = malloc(sizeof(char) * (c+1));
                c = 0;
                b++;
                d++;
            }
        } else {
            c++;
        }
    }
    countryArray[b] = malloc(sizeof(char)* (c+1));
    
//    
//        countryArray[0][3] = 'x';
//        countryArray[0][4] = 'x';
//        countryArray[0][5] = 'x';
//    
    int i = 0;
    int j = 0;
    int k = 0;
    
    for(i = 0; countryString[i] != '\0'; i++){
        if(countryString[i] == delimiter || countryString[i] == delim1 || countryString[i] == delim2){
            countryArray[j][k] = '\0';
            j++;
            if(countryString[i] != delim2){
                i += 1;
            }
            k = 0;
        } else {
            countryArray[j][k] = countryString[i];
            k++;
        }
    }
    countryArray[j][k] = '\0';
    //countryArray[j+1][0] = '\0';
    
    printf("%s", countryArray[j]);
    printf("\n");
    printf("\n");
    
    for (int x = 0; x < noOfDelimiters; x++) {
        printf("%s\n", countryArray[x]);
    }
    
    printf("\n");
    
    
    return 0;
}
