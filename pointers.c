//
// Created by Student5 on 10/6/2021.
//

#include "header/pointers.h"

int pointerFunc(int *input);

int main(void){
    int number = 0;
    printf("Enter a number: \n");

    scanf("%d", &number);

    pointerFunc(&number);
    printf("Output: %d", number);

    return 0;
}

int pointerFunc(int *input){
    *input = *input * *input;
    return *input;
}