#include<stdio.h>
#include<math.h>
int main(){
int i, n;
float x, sum=0, total, add;
printf("1+x+x^2+x^3+......+x^n");
printf("\nEnter the value of x ");
scanf("%f", &x);
printf("\nEnter the value of n ");
scanf("%d", &n);
for(i=1; i<=n; i++){
    add=pow(x,i);
    sum=sum+add;
}
total=sum+1;
printf("\nSum=%f", total);
getch();
}
