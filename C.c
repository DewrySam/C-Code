#include <stdio.h>
void main()
{
int a,b;
a=50;
b=100;
printf("%d\n", a,b);
    if (a==b){
        printf("%d is equal %d\n", a,b);
        }
    else
    if (a>b){
        printf("%d is greater than %d\n", a,b);
        }
    else{
        printf("%d is less than %d\n", a,b);
        }
getch();
}
