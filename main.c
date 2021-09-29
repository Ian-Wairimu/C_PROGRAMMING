
#include <stdio.h>
int main1(){
    //declared the int
    int x = 0, y = 0, result = 0;
    //requesting the user to input first number
    printf("Enter first No: \n");
    scanf("%i", &x);
    //request the user to input second number
    printf("Enter second No: \n");
    scanf("%i", &y);
    //this works the summation of the two number
    result = x + y;
    //this prints the summation of the two number in the console
    printf("Results is: %i \n", result);
    //outputs depend on what the user will enter
    return 0; //which stands for return true if it is one it will be return false
}

