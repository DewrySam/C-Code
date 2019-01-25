#include<stdio.h>
#include<string.h>
int main(){
struct employee{
char name[25];
char auth[25];
int num;
};
struct emp{
char add[25];
struct employee a;
};
struct emp e[100];
int i;
for(i=0; i<3; i++){
scanf("%s %s %s %d", &e[i].add, &e[i].a.name, &e[i].a.auth, &e[i].a.num);
}
for(i=0; i<3; i++){
printf("%s %s %s %d\n", e[i].add, e[i].a.name, e[i].a.auth, e[i].a.num);
}
getch();
}
