//
//  main.c
//  AlgosCoding15l
//
//  Created by Jesse Sahli on 4/20/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char countryString[] = "USA. Canada? Mexico, Bermuda/ Grenada, Belize";
    //    char countryArray[20][20];
    int noOfDelimiters = 1;
    char **countryArray;
    int a = 0;
    int b = 0;
    int c = 0;
    char delimiterArray[4] = {',','.','/','?'};

    
    
    
    for(a = 0; a < 4; a++){
        for(int e = 0; countryString[e] != '\0'; e++){
            if(delimiterArray[a] == countryString[e]){
                noOfDelimiters++;
            }
        }
    }
    
        
        
    countryArray = malloc(sizeof(char*) * noOfDelimiters);
    
    for(int d = 0; countryString[d] != '\0'; d++){
        for(int e = 0; e < 4; e++){
            if(delimiterArray[e] == countryString[d]){
                countryArray[b] = malloc(sizeof(char) * (c + 1));
                c = 0;
                b++;
                d++;
                break;
            }//end of if statement
        }//end of inner for loop
        
        c++;
        
    }//end of outer for loop
    
    countryArray[b] = malloc(sizeof(char)* (c + 1));
    
    
        countryArray[1][6] = 'x';
        countryArray[2][7] = 'x';
        countryArray[2][8] = 'x';
    
    int i = 0;
    int j = 0;
    int k = 0;
    
    for(i = 0; countryString[i] != '\0'; i++){
        for(int e = 0; e < 4; e++){
             if(delimiterArray[e] == countryString[i]){
                 countryArray[j][k] = '\0';
                 j++;
                 k = 0;
                 i += 2;
                 break;
             }//end if statement
        }// end inner for loop
        
        countryArray[j][k] = countryString[i];
        k++;
        
    }//end outer for loop
    
    
    
    countryArray[j][k] = '\0';
    //countryArray[j+1][0] = '\0';
    

    
    for (int x = 0; x < noOfDelimiters; x++) {
        printf("%s\n", countryArray[x]);
    }
    
    printf("\n");
    
    
    
    
    return 0;
}
