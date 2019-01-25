#include<stdio.h>
int swap();
int main(){
int a, b;
printf("Enter the value a & b: ");
scanf("%d %d", &a, &b);
swap(a, b);
getch();
}
int swap(int x, int y){
int tmp;
tmp=x;
x=y;
y=tmp;
printf("Swapping  the value of a & b will be\n");
printf("a=%d & b=%d", x, y);
}
