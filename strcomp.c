#include<stdio.h>
int main(){
struct company{
int serial;
char name[50];
int cont;
};
struct company a={1,"Github",777}, b={2,"Firebase",747}, c={3,"VMware",799};
printf("%d %s %d\n", a.serial, a.name, a.cont);
printf("%d %s %d\n", b.serial, b.name, b.cont);
printf("%d %s %d\n", c.serial, c.name, c.cont);
getch();
}
