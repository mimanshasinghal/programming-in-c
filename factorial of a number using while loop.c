#include<stdio.h>

int main(){
    int n,i = 1;
    unsigned long long fact = 1;

    printf("enter a positive integer:");
    scanf("%d",&n);

    if (n<0){
        printf("factorial is not defined for negative numbers.\n");
    }else{
        while (i<=n){
            fact = fact * i;
            i++;
        }
        printf("factorial of %d= %llu\n",n,fact);
    }
    return 0;
}