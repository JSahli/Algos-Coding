//
//  main.c
//  AlgosCoding15i
//
//  Created by Jesse Sahli on 4/19/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char* myStringArray[] = {"monday", "tuesday", "wednesday", "thursday", "friday"};
    char newString[300];
    int k = 0;
    int x = 0;
    
    
    //This creates the string out of the array of strings
    
    for(int i = 0; myStringArray[i] != '\0'; i++){
        for(int j = 0; myStringArray[i][j] != '\0'; j++){
            newString[k] = myStringArray[i][j];
            k++;
        }
    }
    
    //This checks the sum of all the characters in the array of string
    
    for(int i = 0; myStringArray[i] != '\0'; i++){
        for(int j = 0; myStringArray[i][j] != '\0'; j++){
            x++;
        }
    }
    printf("The length of all the added characters from the array of strings is %d\n", x);
    
    //This checks the length of the new string
    
    for(int i = 0; newString[i] != '\0'; i++){
        if(newString[i + 1] == '\0'){
            printf("The string length is %d\n", i + 1);
        }
    }
        
    
    printf("%s", newString);
    printf("\n");
    
    
    return 0;
}
