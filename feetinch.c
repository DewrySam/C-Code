#include<stdio.h>
int main(){
struct dist{
int feet;
float inch;
};

struct dist d1, d2, d3;
printf("First Distance.\n");
printf("Enter feet and inch: ");
scanf("%d %f", &d1.feet, &d1.inch);
printf("Second Distance.\n");
printf("Enter feet and inch: ");
scanf("%d %f", &d2.feet, &d2.inch);

d3.feet=d1.feet+d2.feet;
d3.inch=d1.inch+d2.inch;
if(d3.inch>=12){
    d3.feet++;
    d3.inch=d3.inch-12;
}
printf("%d feet\n%f inch\n", d3.feet, d3.inch);
}
