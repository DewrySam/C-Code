#include<stdio.h>
int main(){
    int a=17, b=16, c=200, d, length, breadth;
    if(a>b && a>c){
        printf("%d is greater than %d and %d.", a,b,c);
    }
    else
    if(b>a && b>c){
        printf("%d is greater than %d and %d.", b,a,c);
    }
    else
    if(c>a && c>b){
        printf("%d is greater than %d and %d.", c,a,b);
    }
printf("\n\n");
    if(a>b){
        printf("%d is greater and %d is smaller", a,b);
        }
    else{
        printf("%d is greater and %d is smaller", b,a);
    }
printf("\n\n");
if((a,b)%2==0){
    printf("%d is even and %d is odd ", b,a);
}
else{
    printf("%d is even and %d is odd", a,b);
}
printf("\n\n");
printf("Enter 1 or 2= ");
scanf("%d", &d);
switch(d){
case 1:
length=16;
breadth=13;
printf("Length is 16 and breadth is 13\n",d);
printf("Area is %d", length*breadth);
break;
case 2:
length=50;
breadth=45;
printf("Breadth is 45 and length is 50\n",d);
printf("Area is %d", length*breadth);
break;
default: printf("Unknown");
}
getch();
}

