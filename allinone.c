#include<stdio.h>
int main() {
int i, n, a, b[6],c, sum=0;
printf("Enter the value of n=");
scanf("%d", &n);
for(i=1; i<=n; i++)
    printf("%d\n", i);
for(i=1; i<=n; i++)
    sum=sum+i;
    printf("Sum is %d\n", sum);
for(i=1; i<=n; i++)
    a=sum/n;
    printf("Average is %d\n", a);
for(i=1; i<=n; i++){
    if(i%2!=0)
    printf("Odd no is %d\n", i);
}
for(i=1; i<=n; i++){
    if(i%2==0)
    printf("Even is %d\n", i);
}
for(i=0; i<6; i++){
    printf("b[%d]\n", i,b[i]);
}
printf("Enter array element=");
for(i=0; i<6; i++){
    scanf("%d", &b[i]);
    printf("b[%d]=%d\n", i,b[i]);
}
printf("Choose 1 or 2=");
scanf("%d", &c);
switch(c){
case 1:
    printf("My name is Sam Dewry");
    break;
case 2:
    printf("My name is Dewry Sam");
    break;
}
getch();
}


