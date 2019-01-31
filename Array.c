#include<stdio.h>
int main()
{
int i, e[5], f[5], g[5];
printf("Enter 5 element ");
for(i=0; i<5; i++){
        scanf("%d", &e[i]);
    printf("e[%d]=%d\n", i, e[i]);
}
printf("Enter 5 element ");
for(i=0; i<5; i++){
    scanf("%d", &f[i]);
    printf("f[%d]=%d\n", i, f[i]);
}
for(i=0; i<5; i++)
    g[i]=e[i]+f[i];
    printf("%d", g[i]);
getch();
}
