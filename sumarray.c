#include <stdio.h>
int main(){
int i;
int a[]={10,10,10,10,10};
int sum=0;
for(i=0; i<5; i++){
    printf("a[%d]=%d\n", i, a[i]);
    sum=sum+a[i];
}
printf("Sum is %d", sum);
getch();
}

