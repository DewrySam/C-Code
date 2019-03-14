#include<stdio.h>
int main(){
float a, b, c, d, e;
printf("Enter the value of a: ");
scanf("%f", &a);
printf("Enter the value of b: ");
scanf("%f", &b);
printf("Enter the value of c: ");
scanf("%f", &c);
printf("Enter the value of d: ");
scanf("%f", &d);
printf("Enter the value of e: ");
scanf("%f, &e");
if(a>b && a>c && a>d && a>e)
    printf("%.1f is the greatest", a);
if(b>a && b>c && b>d && b>e)
    printf("%.1f is the greatest", b);
if(c>a && c>b && c>d && c>e)
    printf("%.1f is the greatest", c);
if(d>a && d>b && d>c && d>e)
    printf("%.1f is the greatest", d);
if(e>a && e>b && e>c && e>d)
    printf("%.1f is the greatest", e);
getch();
}
