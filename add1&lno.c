#include<stdio.h>
int main(){
int n, a, b, c;
scanf("%d", &n);

/*For three digit number only*/

a=n/100;
b=n%100;
c=b%10;
printf("Adding 1st & last value of a digit(%d & %d) is: %d", a, c, a+c);
getch();
}







