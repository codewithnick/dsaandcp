#include<stdio.h>
#define r1 3
#define c1 3
#define r2 3
#define c2 3
int main(){
int n,i,j,k;
int arr1[r1][c1];
printf("enter first matrix\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
    }
}
int arr2[r2][c2],mul[r1][c2];
printf("enter second matrix\n");
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
    }
}
printf("\nmultiplication of matrix\n");
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        mul[i][j]=0;
        for(k=0;k<c1;k++){
                mul[i][j]+=(arr1[i][k]*arr2[k][j]);
        }
        printf("%d ",mul[i][j]);
    }
    printf("\n");
}
return 0;
}
