#include "header/switchcasecalculator.h"

int main2(){
    int x, y;
    char z;
    printf("Hey?\n");
    printf("Enter operator type........\n");
    printf("Enter: \n + = Addition \n - = Subtraction \n * = Multiplication \n / = Division \n '%' = Modulo \n");
    printf("Enter Type........? \n");
    scanf("%c", &z);

    printf("............Enter number to perform operations............\n");
    printf("Enter First Number: \n");
    scanf("%d", &x);
    printf("Enter Second Number: \n");
    scanf("%d", &y);

    switch(z)
    {
        case '+':
            printf("\nThe Summation Is: %d \n", x + y);
            printf("Welcome Back Again!!\n");
            break;
        case '-':
            printf("\nThe Subtraction Is: %d \n", x - y);
            printf("Welcome Back Again!!\n");
            break;
        case '*':
            printf("\nThe Multiplication Is: %d \n", x * y);
            printf("Welcome Back Again!!\n");
            break;
        case '/':
            printf("\nThe Division Is: %d \n", x / y);
            printf("Welcome Back Again!!\n");
            break;
        case '%':
            printf("\nThe Modulo Is: %d \n", x % y);
            printf("Welcome Back Again!!\n \n");

        default:
            printf("\n!!!!Invalid OutPut Please Try Again!!!!\n");
    }

    return 0;
}
