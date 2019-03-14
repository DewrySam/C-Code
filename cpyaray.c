#include<stdio.h>
int main(){
int *p, a[5], i, b[5];
p=&a[0];
printf("Enter 5 element.\n");
for(i=0; i<5; i++){
    scanf("%d", &a[i]);
    printf("a[%d]=%d\n", i, *p);
    p++;
}
printf("\n");
printf("Transfer of element a[5] to b[5] element.\n\n");
for(i=0; i<5; i++){
        b[i]=a[i];
    printf("b[%d]=%d\n", i, b[i]);
}
getch();
}

