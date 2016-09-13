//
//  main.c
//  AlgosCoding15h
//
//  Created by Jesse Sahli on 4/19/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

char myQuote[] = "\"Mr. Fay, is this going to be a battle of wits?\" \"If it is,\" was the indifferent retort, \"you have come unarmed!\"\n";

// function to find the length of a string

int findStringLength(char string[]) {
    int i;
    for(i = 0; string[i] != '\0'; i++){
        
    }
    return i;
}

//function to find the index at which at substring appears in a string

int findSubIndex(char fullString[], char subString[]) {
    int i = 0;
    int j = 0;
    int hold;
    
    for(i = 0; fullString[i] != '\0'; i++) {
        
        hold = i;
        
        
        for(j = 0; subString[j] != '\0'; j++) {
            if(subString[j] != fullString[i]) {
                break;
            }
            if(subString[j + 1] == '\0') {
                int subIndex = hold;
                return subIndex;
            }
            i++;
        }
    }
    return 1;
}

//function to find the index at which a substring ends within a string

int FindSubEnd(char fullString[], char subString[]){
    int SubEndIndex = findStringLength(subString) + findSubIndex(fullString, subString);
    return SubEndIndex;
}

//function to replace a substring inside of a string with another substring

void replaceString(char fullString[],char subString[],char replacementString[]){
    
    int subStringIndex = findSubIndex(fullString, subString);
    int newStringSize = (findStringLength(fullString) - findStringLength(subString)) + findStringLength(replacementString);
    int replacementStringLength = findStringLength(replacementString);
    int subEndingIndex = FindSubEnd(fullString, subString);
    //char newString[newStringSize]; CUT OUT FOR 15H
    char* newString;
    newString = (char *)malloc(newStringSize + 1);
    int i = 0;
    int j = 0;
    
    
    
    for(i = 0; i <= newStringSize; i++){
        if(i < subStringIndex){
            newString[i] = fullString[i];
        } else if (i >= subStringIndex + replacementStringLength)/*<<here is your problem*/{
            break;
        } else {
            newString[i] = replacementString[j];
            j++;
        }
    }
    
    for(int x = subEndingIndex; fullString[x] != '\0'; x++){
        newString[i] = fullString[x];
        i++;
    }
    
    newString[i] = '\0';
    
    
    for(int k = 0; newString[k] != '\0'; k++){
        printf("%c",newString[k]);
    }
    free(newString);
    
    return;
}


int main(int argc, const char * argv[]) {
    
    replaceString(myQuote, "indifferent", "nonchalant");
    printf("\n");
    replaceString("The boat is quicker and big", "quicker", "slow");
    printf("\n");
    
    replaceString("john is going to the store", "john", "bill");
    printf("\n");
    
    replaceString("the orange cup is full", "orange", "red");
    printf("\n");
    
    replaceString("I cant believe this", "this", "anything");
    printf("\n");
    
    return 0;
}

