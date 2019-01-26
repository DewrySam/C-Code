#include<stdio.h>
void main(){
int arr[2][2], brr[2][2], c[2][2];
int i, j;
printf("Enter 4 matrix element for arr=");
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        scanf("%d", &arr[i][j]);
        printf("arr[%d][%d]=%d\n", i, j ,arr[i][j]);
    }
}
printf("\n");
printf("Enter 4 matrix element for brr=");
for(i=0; i<2; i++) {
    for(j=0; j<2; j++){
        scanf("%d", &brr[i][j]);
        printf("brr[%d][%d]=%d\n", i, j, brr[i][j]);
    }
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        c[i][j]=arr[i][j]+brr[i][j];
        printf("%d ", c[i][j]);
    }
}
getch();
}

