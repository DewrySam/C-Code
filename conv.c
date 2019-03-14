#include<stdio.h>
int main(){
float meter, feet, inch, centimeter;
int n;
printf("Distance between two cities is(in km): ");
scanf("%d", &n);
meter=n*1000;
feet=n*3280.84;
inch=n*39370.079;
centimeter=n*100000;
printf("Converting into m, ft, in, cm.\n");
printf("Meter=%.1f\nFeet=%.1f\nInch=%.1f\nCentimeter=%.1f\n", meter, feet, inch, centimeter);
getch();
}
