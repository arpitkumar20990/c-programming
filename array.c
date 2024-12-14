#include<stdio.h>
int main(){
    int i,size,arr[100],sum=0;
    printf("enter the size : ");
    scanf("%d",&size);
    printf("Enter the elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}