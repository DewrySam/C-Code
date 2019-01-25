#include<stdio.h>
int main(){
int i;
struct student{
char name[50];
int roll;
char branch[50];
};
printf("Enter your data.\n");
struct student a[100];
for(i=0; i<=4; i++){
    scanf("%s %d %s", &a[i].name, &a[i].roll, &a[i].branch);
}
printf("\n\n");
printf("Your entered data.\n");
for(i=0; i<=4; i++){
    printf("%s %d %s\n", a[i].name, a[i].roll, a[i].branch);
}
getch();
}
