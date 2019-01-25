#include<stdio.h>
#include<string.h>
int main(){
char ch[10];
int i, len=0;
scanf("%s", &ch);
for(i=0; ch[i]!='\0'; i++){
len++;
}
printf("%d", len);
getch();
}
