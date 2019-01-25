#include<stdio.h>
void display();
struct menu{
int age;
char name[50];
};

int main(){
struct menu m1;
printf("Enter name & age.\n");
scanf("%s %d", &m1.name, &m1.age);
display(m1);
getch();
}

void display(struct menu m1){
printf("Your entered data.\n");
printf("%s %d\n", m1.name, m1.age);
}
