#include<stdio.h>
#include<string.h>
int main(){
int i, a[50], b[50], t[50];
printf("First string: ");
gets(a);
printf("Second string: ");
gets(b);
printf("Before swapping\n");
printf("First string: %s\nSecond string: %s\n", a, b);
strcpy(t, a);
strcpy(a, b);
strcpy(b, t);
printf("After swapping\n");
printf("First string: %s\nSecond string: %s\n", a, b);
getch();
}
