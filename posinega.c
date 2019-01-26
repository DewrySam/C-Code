#include<stdio.h>
int main(){
int i;
printf("Enter value: ");
scanf("%d", &i);
if(i>1){
    printf("The number %d is positive.", i);
}
if(i<=0){
    if(i==0)
        printf("You have entered zero.");
    else
        printf("The number %d is negative.", i);
}
getch();
}

