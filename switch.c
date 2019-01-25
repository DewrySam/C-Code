#include<stdio.h>
int main(){
int i, a, b, c;
printf("Enter a and b ");
scanf("%d %d", &a, &b);
printf("1: Add\n");
printf("2: Subtract\n");
printf("3: Multiply\n");
scanf("%d", &i);
switch(i){
case 1:
    c=a+b;
    printf("Addition of %d and %d is %d", a, b, c);
    break;
case 2:
    c=a-b;
    printf("Subtraction of %d and %d is %d", a, b, c);
    break;
case 3:
    c=a*b;
    printf("Multiplication of %d and %d is %d", a, b, c);
    break;
default:
    printf("Not exist");
}
getch();
}
