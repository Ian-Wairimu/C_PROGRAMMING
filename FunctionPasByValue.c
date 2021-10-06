//
// Created by Student5 on 10/6/2021.
//
#include <stdio.h>

int cubeNumber1(int n);

int mainT(void) {
    int number = 5;

    printf("%d", cubeNumber1(number));

    return 0;
}
int cubeNumber1(int n){
    return n * n * n;
}