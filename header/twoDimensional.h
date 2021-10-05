//
// Created by Student5 on 10/5/2021.
//

#ifndef TUTORIAL_TWODIMENSIONAL_H
#define TUTORIAL_TWODIMENSIONAL_H
#include <stdio.h>

void twoDimensional(){
    int num[3][5] = {{2, 4, 5, 6, 7},
                     {5, 6, 8, 9, 3},
                     {7, 6, 4, 2, 1}};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("OutPut 2-D array: %d \n", num[i][j]);
        }
    }
}
void twoDimensional1(){
    char name[4][4] = {{'m', 'o', 'o', 'n'},
                     {'p', 'a', 'u', 'l'},
                     {'p', 'o', 'o', 'l'}};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%c \n", name[i][j]);
        }
    }
}
#endif //TUTORIAL_TWODIMENSIONAL_H
