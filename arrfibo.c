#include<stdio.h>
int main(){
int f[100], i, n;
printf("Value of n: ");
scanf("%d", &n);
f[0]=0;
f[1]=1;
for(i=2; i<n; i++){
    f[i]=f[i-1]+f[i-2];
}
for(i=0; i<n; i++){
    printf("f[%d]=%d\n\n", i, f[i]);
}
getch();
}
