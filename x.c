#include<stdio.h>
#include<math.h>
int series();
int main(){
int x, n, result;
printf("Enter value of x & n: ");
scanf("%d %d", &x, &n);
result=series(x, n);
printf("Result = %d\n", result);
getch();
}


int series(int y, int m){
int i, sum=0, add;
for(i=1; i<=m; i++){
    sum=sum+pow(y,i);
}
add=sum+1;
return add;
}
