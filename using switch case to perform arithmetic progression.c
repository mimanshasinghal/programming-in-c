#include<stdio.h>

int main(){
    double num1,num2;
    char op;

    printf("enter first number:");
    scanf("%lf",num1);

    printf("enter an operator(+,-,*,/):");
    scanf("%c",&op);

    printf("enter second number:");
    scanf("%lf",num2);

    switch (op){
        case '+':
        printf("Result:%.2lf\n",num1 + num2);
        break;

        case '-':
        printf("Result:%.2lf\n",num1 - num2);
        break;

        case '*':
        printf("Result:%.2lf\n",num1 * num2);
        break;

        case '/':
        if (num2!=0){
        printf("Result:%.2lf\n",num1 / num2);
    }else{
        printf("error:division by zero is not allowed.\n");
    }
    break;
    default:
    printf("invalid operator!\n");
    }
    return 0;
}