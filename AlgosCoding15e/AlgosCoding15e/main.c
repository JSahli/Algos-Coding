//
//  main.c
//  AlgosCoding15e
//
//  Created by Jesse Sahli on 4/15/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

char myQuote[] = "\"Mr. Fay, is this going to be a battle of wits?\"\"If it is,\" was the indifferent retort, \"you have come unarmed!\"\n";

int positionArray[20];


//would like to know why the int* return type gives me back the array?

int* takeCommas(char string[]) {
    int j = 0;
    int i;
    
    for(i = 0; string[i] != '\0'; i++){

        if(string[i] == ',') {
            positionArray[j] = i;
            printf("%d\n", positionArray[j]);
            j++;
        }//end of if statement
    }//end of for statement
    return positionArray;
}



int main(int argc, const char * argv[]){
   
     
    
    takeCommas(myQuote);
    printf("%d %d %d\n", positionArray[0], positionArray[1], positionArray[2]);
   
    
    
    return 0;
};
