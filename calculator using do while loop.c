#include<stdio.h>

int main(){
    double num1,num2,result;
    int choice;

    do{
        printf("\n--simple calculator--\n");
        printf("1.Addition(+)\n");
        printf("2.Subtraction(-)\n");
        printf("3.Multiplication(*)\n");
        printf("4.Division(/)\n");
        printf("5.Exit\n");
        printf("enter your choice(1-5):");
        scanf("%d",&choice);
    
    if (choice>=1 && choice<=4){
        printf("enter first number:");
        scanf("%lf",&num1);

        printf("enter second number:");
        scanf("%lf",&num2);
    }
    switch (choice){
        case 1:
        result = num1 + num2;
        printf("Result:%.2lf\n",result);
        break;

        case 2:
        result = num1 - num2;
        printf("Result:%.2lf\n",result);
        break;

        case 3:
        result = num1 * num2;
        printf("Result:%.2lf\n",result);
        break;

        case 4:
        if(num2 != 0)
        result = num1 / num2;
        else {
            printf("ERROR:: Division by zero!\n");
            break;
    }
         printf("Result:%.2lf\n",result);
          break;

        case 5:
         printf("Exiting calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
      }  while (choice != 5);

    return 0;

    }
    
