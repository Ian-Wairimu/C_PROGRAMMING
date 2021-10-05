//
// Created by Student5 on 10/5/2021.
//

#ifndef TUTORIAL_ONEDIMENSION_H
#define TUTORIAL_ONEDIMENSION_H
#include <stdio.h>
void charIteration() {
    char characters[4] = {'m', 'o', 'o', 'n'};
    for (int i = 0; i < 4; ++i) {
        while(i == 4)break;
        printf("%c", characters[i]);
    }
}
void intIteration(){
    int number[7] = {4, 2, 10, 24, 13, 50, 100};
    for (int i = 0; i < 7; ++i) {
        while(i == 7)break;
        printf("\n%d\n", number[i]);
    }
}
void doubleIteration(){
    double dobNumber[6] = {5.0, 4.5, 4.0, 3.5, 3.0, 2.5};
    for (int i = 0; i < 6; ++i) {
        if (i == 6)break;
        printf("%f \n", dobNumber[i]);
    }
}
//void stingIteration(){
//    char name[3] = {"s", "u", "n"};
//}
#endif //TUTORIAL_ONEDIMENSION_H
