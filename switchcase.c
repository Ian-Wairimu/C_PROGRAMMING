//this is a calculator that does operations
#include "header/switchcase.h"

int main1(){
    //have declared three var of type int
    int x, y;
    int z = 0;
    //welcoming the user
    printf("Hey........?\n");
    printf("Enter number to do operations......\n");
    printf("Enter First Number: \n");//prompts user to enter first number
    scanf("%d", &x);
    printf("Enter Second Number: \n");//prompts user to enter second number
    scanf("%d", &y);
    printf("........Enter operator type........\n");
    printf("Enter: \n 1 = Addition \n 2 = Subtraction \n 3 = Multiplication \n 4 = Division \n 5 = Modulo \n");//represents operators
    printf("Enter Type........? \n");
    scanf("%d", &z);//requests the user to choose which action he/she wants to perform
    switch(z)
    {
        case 1:
            printf("The Summation Is: %d \n", x + y);
            printf("Welcome Back Again!!\n");
            break;
        case 2:
            printf("The Subtraction Is: %d \n", x - y);
            printf("Welcome Back Again!!\n");
            break;
        case 3:
            printf("The Multiplication Is: %d \n", x * y);
            printf("Welcome Back Again!!\n");
            break;
        case 4:
            printf("The Division Is: %d \n", x / y);
            printf("Welcome Back Again!!\n");
            break;
        case 5:
            printf("The Modulo Is: %d \n", x % y);
            printf("Welcome Back Again!!\n");
    }

    return 0;
}
