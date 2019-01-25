#include<stdio.h>
int main(){
int totala, totalb;
float percenta, percentb;
struct marksheet{
int math, cs, hu, ph, es;
};
struct marksheet s1,s2,s3;
printf("Marks for s1\n");
scanf("%d %d %d %d %d", &s1.math, &s1.cs, &s1.hu, &s1.ph, &s1.es);
printf("\n\nS1 Marksheet:-\n");
printf("Maths=%d\nCs=%d\nHU=%d\nPH=%d\nES=%d\n\n", s1.math, s1.cs, s1.hu, s1.ph, s1.es);
printf("Marks for s2\n");
scanf("%d %d %d %d %d", &s2.math, &s2.cs, &s2.hu, &s2.ph, &s2.es);
printf("\n\nS2 Marksheet:-\n");
printf("Maths=%d\nCs=%d\nHU=%d\nPH=%d\nES=%d\n\n", s2.math, s2.cs, s2.hu, s2.ph, s2.es);
totala=s1.math+s1.cs+s1.hu+s1.es+s1.ph;
totalb=s2.math+s2.cs+s2.hu+s2.es+s2.ph;
printf("Total marks for s1=%d\n", totala);
printf("Total marks for s2=%d\n\n", totalb);
percenta=totala/5;
percentb=totalb/5;
printf("Percentage of s1=%.1f\n", percenta);
printf("Percentage of s2=%.1f\n\n", percentb);
if(percenta>=85)
        printf("S1=Grade A\n");
else
        printf("S1=Grade B\n");
if(percentb>=85)
        printf("S2=Grade A\n");
else
        printf("S2=Grade B\n");
getch();
}
