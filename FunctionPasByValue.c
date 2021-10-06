//
// Created by Student5 on 10/6/2021.
//
#include <stdio.h>

int cubeNumber(int n);

int main() {
    int number = 5;

    printf("%d", cubeNumber(number));

    return 0;
}
int cubeNumber(int n){
    return n * n * n;
}