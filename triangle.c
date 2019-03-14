#include<stdio.h>
int main(){
int a, b, c, total;
printf("First angle: ");
scanf("%d", &a);
printf("Second angle: ");
scanf("%d", &b);
printf("Third angle: ");
scanf("%d", &c);
total=(a+b+c)==180;
if(total){
    printf("The triangle is valid.");
} else
    printf("Invalid triangle.");
getch();
}
