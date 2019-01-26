#include<stdio.h>
int main(){
int i=1, m;
printf("Type value of m: ");
scanf("%d", &m);
while(i<=10){
    printf("%d*%d=%d\n", m, i, m*i);
    i++;
}
printf("\n\n");
int j=1, n;
printf("Type value of n: ");
scanf("%d", &n);
while(j<=10){
    printf("%d+%d=%d\n", n, j, n+j);
    j++;
}
getch();
}

