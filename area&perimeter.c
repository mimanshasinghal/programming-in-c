#include<stdio.h>

int main (){
int length,width,area,perimeter;

printf("enter length=");
scanf("%d", &length);

printf("enter width=");
scanf("%d", &width);

area = length * width;
perimeter = 2*(length + width);

printf("area of rectangle = %d\n",area);
printf("perimeter of rectangle = %d\n",perimeter);
 return 0;
}
