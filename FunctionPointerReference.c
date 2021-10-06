//cube a variable using pass reference using pointers
#include <stdio.h>

int cubeNumber(int *numPtr); //function prototype
int divisionNum(int *divPtr);

int mainR(void){
    int num = 5; //initializer number
    int number = 6; //initializer number

    cubeNumber(&num);//pass address of a number to cube reference

    printf("%d \n", num);

    divisionNum(&number);

    printf("%d", number);

    return 0;
}

//function declared
int cubeNumber(int *numPtr){
*numPtr = *numPtr * *numPtr * *numPtr;
}

int divisionNum(int *divPtr){
    *divPtr = *divPtr + *divPtr;
}