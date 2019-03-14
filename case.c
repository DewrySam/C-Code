#include<stdio.h>
int main(){
int cl, fail;
scanf("%d", &cl);
scanf("%d", &fail);
switch(cl){
case 1:
       if(fail>3)
         printf("No grace");
       else
         printf("5 grace mark");
         break;
case 2:
       if(fail>2)
         printf("No grace");
       else
         printf("4 grace mark");
         break;
default:
       printf("Enter only 1 or 2.");
}
getch();
}


