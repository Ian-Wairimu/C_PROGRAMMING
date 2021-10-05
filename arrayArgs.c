//
// Created by Student5 on 10/5/2021.
//
#include <stdio.h>

double  getAverage(int arr[], int size){
    int i;
    double avg;
    double sum = 0;

    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }

    avg = sum / size;

    return avg;
}
int main(){
    printf("%d", getAverage(5,5));
}

