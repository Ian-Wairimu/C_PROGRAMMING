//
// Created by Student5 on 9/29/2021.
//

#include "header/ifstatementcalculator.h"

int main(){
    int x;
    int y;
    char z;
    printf("Enter: \n + = add \n - = subtract \n * = multiply \n / = divide \n");
    printf("Enter Operator Type: \n");
    scanf("%c", &z);

    printf("Enter First Number: \n");
    scanf("%d", &x);

    printf("Enter Second Number: \n");
    scanf("%d", &y);

    if(z == '+'){
        printf("The Sum Is: %d", x + y);
    }
    if(z == '-'){
        printf("The Subtraction Is: %d", x - y);
    }
    if(z == '*'){
        printf("The Mutiplication Is: %d", x * y);
    }
    if(z == '/'){
        printf("The Division Is: %d", x / y);
    }

    return 0;
}
