#include <stdio.h>
int main() {
 int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
 printf("enter the row and column of the matrix : ");
 scanf("%d%d",&r1,&c1);
 printf("enter the row and column of the matrix : ");
 scanf("%d%d",&r2,&c2);
 if(c1!=r2){
   printf("multiplication is not possible");
 }
else{
  printf("enter the elements of the matrix a\n");
  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
      printf("enter the elements a[%d][%d] : ",i,j);
      scanf("%d",&a[i][j]);}
    }
    printf("enter the elements of the matrix b\n");
    for(i=0;i<r2;i++){
      for(j=0;j<c2;j++){
        printf("enter the elements b[%d][%d] : ",i,j);
        scanf("%d",&b[i][j]);}
      }
    printf("matrix a will be\n") ; 
    for(i=0;i<r1;i++){
      for(j=0;j<c1;j++){
        printf("%d\t",a[i][j]);
      }printf("\n");
    }
    printf("matrix b will be\n") ; 
    for(i=0;i<r2;i++){
      for(j=0;j<c2;j++){
        printf("%d\t",b[i][j]);
      }printf("\n");
    }
  printf("multiplication of the matrix a and b will be\n");
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      c[i][j]=0;
      for(k=0;k<c1;k++){
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
      }
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
  }
}
 