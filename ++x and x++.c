#include<stdio.h>

int main(){

    int x = 6;
    printf("The initial value of x is :%d\n",x);
    printf("\nUsing pre increment (++x) value is printed as:%d\n",++x);
    x=6;
    printf("\nUsing post increment (x++) value is printed as:%d\n",x++);

    return 0;
}