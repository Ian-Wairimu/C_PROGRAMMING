//
// Created by Student5 on 10/6/2021.
//

#include "pointers.h"

int mainA(void){
    int y = 10;
    int *yPtr = &y;

    printf("%p", *yPtr);

    return 0;
}
