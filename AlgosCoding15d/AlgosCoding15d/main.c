//
//  main.c
//  AlgosCoding15d
//
//  Created by Jesse Sahli on 4/14/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>

char myQuote[] = "\"Mr. Fay, is this going to be a battle of wits?\" \"If it is,\" was the indifferent retort, \"you have come unarmed!\"\n";


    
void findSubIndex(char fullString[], char subString[]) {
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
                printf("The index of %s is %d\n", subString, hold);
                return;
            }
            i++;
        }
    }
    return;
}





int main(int argc, const char * argv[]) {

    findSubIndex(myQuote, "indifferent");
    findSubIndex("the bald man", "the");
    findSubIndex("mad cow disease", "cow");
    findSubIndex("my je name is ss e jesse", "jesse");
    findSubIndex("i am done", "done");
    findSubIndex("the grey mouse", "dog");

    
    
    return 0;
}
