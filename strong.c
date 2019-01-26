#include <stdio.h>
int main(){
    int quo, rem, q, r, s, n, a, b, t, u;
    printf("Enter an 3 digit integer: ");
    scanf("%d", &n);
    quo=n/100;
    rem=n%100;
    a=rem/10;
    b=rem%10;
    q=quo*quo*quo;
    s=a*a*a;
    t=b*b*b;
    u=q+s+t;
if(u==n)
    printf("Its an armstrong number.");
else
    printf("Its not an armstrong number.");
getch();
}

