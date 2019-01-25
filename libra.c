#include<stdio.h>
#include<string.h>
int main(){
/*Adding a word with another word*/
printf("USING STRCAT\n");
char full_name[]="Sam ";
char name[]="Dewry";
strcat(full_name,name);
printf("Name of string= %s\n", name);
printf("Full Name of string= %s\n", full_name);
printf("\n\n");
//Copying and pasting variable
printf("USING STRCPY\n");
char copy[]="Sam Dewry";
char paste[50];
strcpy(paste,copy);
printf("Copying the 1= %s\n", copy);
printf("Pasting in 2= %s", paste);
printf("\n\n");
/*Finding the length of the string*/
printf("USING STRLEN\n");
char arr[]="Software Engineer";
char brr[]="Professional in coding";
int len1, len2;
len1=strlen(arr);
len2=strlen(brr);
printf("Length of string 1 is %d\n", len1);
printf("Length of string 2 is %d", len2);
printf("\n\n");
/*Convert a uppercase to lower and lowercase to upper*/
printf("USING STRUPR AND STRLWR\n");
char up[]="billboard";
char lw[]="WINDOWS";
strupr(up);
strlwr(lw);
printf("In uppercase= %s\n", up);
printf("In lowercase= %s", lw);
printf("\n\n");
/*Reversing a string*/
printf("USING STRREV\n");
char ori[]="Premium Laptop";
strrev(ori);
printf("In reverse= %s", ori);
getch();
}
