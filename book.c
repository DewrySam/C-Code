#include<stdio.h>
#include<string.h>
int main(){
struct book{
char name[15];
float price;
int pages;
};
struct book b1, b2, b3;
printf("Enter name, price and pages.\n");
scanf("%s %f %d", &b1.name, &b1.price, &b1.pages);
scanf("%s %f %d", &b2.name, &b2.price, &b2.pages);
scanf("%s %f %d", &b3.name, &b3.price, &b3.pages);
printf("\n");
printf("And this is what you entered.\n");
printf("%s  %f  %d\n", b1.name, b1.price, b1.pages);
printf("%s  %f  %d\n", b2.name, b2.price, b2.pages);
printf("%s  %f  %d\n", b3.name, b3.price, b3.pages);
getch();
}
