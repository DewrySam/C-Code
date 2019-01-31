#include<stdio.h>
int main(){
int i, search, arr[50], count=0;
printf("Enter 5 element: ");
for(i=0; i<5; i++){
    scanf("%d", &arr[i]);
    printf("a[%d]=%d\n", i, arr[i]);
    }
printf("Enter element to search: ");
scanf("%d", &search);
for(i=0; i<5; i++){
    if(arr[i]==search){
        printf("%d element is in location %d\n", search, i+1);
        count++;
    }
}
if(count==0){
    printf("%d is not present.", search);
}
getch();
}
