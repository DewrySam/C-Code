#include<stdio.h>
int main(){
char str[100], sub[100];
int pos, len, c=0;
printf("Input string: ");
gets(str);
printf("Enter the pos & len of substring: ");
scanf("%d %d", &pos, &len);
while(c<len){
    sub[c]=str[pos+c-1];
    c++;
}
sub[c]='\0';
printf("Substring is %s\n", sub);
getch();
}
