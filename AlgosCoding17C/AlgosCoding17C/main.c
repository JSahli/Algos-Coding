//
//  main.c
//  AlgosCoding17C
//
//  Created by Jesse Sahli on 4/26/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>


int findStringLength(char string[]) {
    int i;
    for(i = 0; string[i] != '\0'; i++){
        
    }
    return i;
}


void reversedString(char string[], int index, int size){
    
    char swap;
    
    //swapping the first character with the last, size - index is to continue down the line i.e. 0 swap with 11, 1 swap with 10, 2 swap with 9, etc.
    

    swap = string[index];
    string[index] = string[size - index];
    string[size - index] = swap;
    
    if(index == size/2){
        printf("%s\n", string);
        return;
    } else {
        reversedString(string, index + 1, size);
    }
}
    


int main(int argc, const char * argv[]) {
 
    char myString[] = "MIRR0R IM4G3";
    
    //Find String Length is subrtacted by one because length starts at 1 and index starts at 0
    
    reversedString(myString, 0, findStringLength(myString) - 1);
    
}

