//
//  main.c
//  AlgosCoding17D
//
//  Created by Jesse Sahli on 4/27/16.
//  Copyright © 2016 sahlitude. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>




// function to check for a decimal

int decimalCheck(char string[]){
    
    int i = 0;
    int dCheck = 0;
    
    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == '.'){
            dCheck = 1;
        }
    }
    return dCheck;
}



// function to find the place of the decimal

int findDecimalPosition(char string[]){
    int i = 0;
    
    for(i = 0; string[i]; i++){
        if (string[i] == '.') {
            break;
        }
    }
    return i;
}






//function to write out a numerical string as a decimal float

double alphaToNumPostDecimal(char string[], double answer, int i, double tenthPlace){
    
    
    if(string[i+1] == '\0'){
        return answer;
    } else {
        i++;
        tenthPlace = tenthPlace * .1;
        return alphaToNumPostDecimal(string, answer + (tenthPlace * (string[i] - '0')), i, tenthPlace);
    }
}







//function to convert anything thats not past a decimal place into a float

double alphaToNumWithoutDecimal(char string[], double answer, int i){
    
    
    if(string[i+1] == '\0' || string[i+1] == '.'){
        return answer;
    } else {
        i++;
        return alphaToNumWithoutDecimal(string, answer * 10 + (string[i] - '0'), i);
    }
}




// function to convert a string that doesnt have a decimal, to a number

void alphaToNumRecursiveNoDecimal(char string[], double answer, int i){
    
    
    if(string[i+1] == '\0'){
        if(answer < INT_MAX){
            printf("The answer: %d can be stored in an integer \n",(int)answer);
        
        } else if(answer < LONG_MAX){
            printf("The answer: %ld can be stored in a long \n", (long int)answer);
        
        } else {
            printf("ERROR: This string (without a decimal) is too long to convert into an integer or long\n");
        }
    } else {
        i++;
        alphaToNumRecursiveNoDecimal(string, answer * 10 + (string[i] - '0'), i);
    }
}









//function that adds the results of two other functions that produce the numeric value both before AND after the decimal Place


void convertString(char string[]){
    
    if(decimalCheck(string) == 1){
    
        double converted = alphaToNumWithoutDecimal(string, 0, -1) + alphaToNumPostDecimal(string, 0, findDecimalPosition(string), 1);
    
        if(converted < FLT_MAX) {
            printf("The answer: %f can be stored in a float \n", converted);
        } else if (converted < DBL_MAX) {
            printf("The answer: %f can be stored in a double \n", converted);
        } else {
            printf("ERROR: this string is too large to store in a float or double\n");
        }
    }
    
    if(decimalCheck(string) == 0){
        alphaToNumRecursiveNoDecimal(string, 0, -1);
    }
    
}








int main(int argc, const char * argv[]) {
    

    char myString1[] = "3.14159";
    char myString2[] = "8572311.483402";
    char myString3[] = "11223344556";
    char myString4[] = "22233455634523342452435244";
    
    
//    //THESE NEXT TWO LINES ARE JUST TO HIGHLIGHT HOW MY PROGRAM WORKS: BY ADDING THE VALUE OF THE FOLLOWING 2 CALLED FUNCTIONS, WHICH RETURN THE VALUES OF WHAT IS BEFORE AND WHAT IS AFTER THE DECIMAL POINT
//    
//    printf("%f\n", alphaToNumPostDecimal(myString, 0, findDecimalPosition(myString), 1));
//    printf("%f\n", alphaToNumWithoutDecimal(myString, 0, -1));
    
    
    
    
    convertString(myString1);
    
    printf("\n");
    
    convertString(myString2);
    
    printf("\n");
    
    convertString(myString3);
    
    printf("\n");
    
    convertString(myString4);
    
    
    
    return 0;
}
