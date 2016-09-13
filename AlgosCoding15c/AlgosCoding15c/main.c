//
//  main.c
//  AlgosCoding15c
//
//  Created by Jesse Sahli on 4/14/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

char myQuote[] = "\"Mr. Fay, is this going to be a battle of wits?\" \"If it is,\" was the indifferent retort, \"you have come unarmed!\"\n";



 int findStringLength(char string[]) {
     int i;
     for(i = 0; string[i] != '\0'; i++){
        
}
     return i;
}


int main(int argc, const char * argv[]) {
    
    
    printf("The string is %d characters long\n", findStringLength(myQuote));

    
    
    return 0;
}
