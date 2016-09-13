//
//  main.c
//  AlgosCoding15f
//
//  Created by Jesse Sahli on 4/15/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

char myQuote[] = "\"Mr. Fay, is this going to be a battle of wits?\"\"If it is,\" was the indifferent retort, \"you have come unarmed!\"\n";

char newString[100];

char* createSubString(char fullString[], char subString[]) {
    int i = 0;
    int j = 0;
    
    
    // for loop through the full string
    for(i = 0; fullString[i] != '\0'; i++){
        
    //checking for the first character in the sub string
         if (fullString[i] == subString[0] || j != 0) {
            
            if (subString[j] == fullString[i] && subString[j] != '\0'){
                newString[j] = subString[j];
                
                j++;
    
                if(subString[j]=='\0')break;
                
            }//end of if statement
            else {
                j = 0;
                newString[j]  = '\0';
            }
        }//end of 2nd if statement
    }//end of for loop
    

    for(int k = 0; newString[k] != '\0'; k++){
    printf("%c", newString[k]);
    }

    return newString;
}





int main(int argc, const char * argv[]) {
    
    
    createSubString(myQuote, "\"you have come unarmed!");
    
    printf(" \n %c ", newString[2]);
    
    return 0;
}
