#include<stdio.h>
void main(){
int arr[3][3];
int i, j;
printf("Enter 9 matrix element=");
for(i=0; i<=3; i++){
    for(j=0; j<=3; j++){
        scanf("%d", &arr[i][j]);
        printf("a[%d][%d]=%d\n", i, j ,arr[i][j]);
    }
}
getch();
}

