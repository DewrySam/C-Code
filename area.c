#include<stdio.h>
int main(){
int i, a1, l, b;
float pi=3.14, a2, r;
printf("Value of l, b & r: ");
scanf("%d %d %f", &l, &b, &r);
printf("1: Area of rectangle.\n");
printf("2: Area of circle.\n");
scanf("%d", &i);
switch(i){
case 1:
    a1=l*b;
    printf("Area of rectangle: %d", a1);
    break;
case 2:
    a2=pi*r*r;
    printf("Area of circle: %f", a2);
    break;
case 3:
    printf("Please reenter");
}
getch();
}
