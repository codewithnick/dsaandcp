#include <stdio.h>
int main(){
int n,i,j,k,r1,r2,c1,c2;
scanf("%d",&r1);
scanf("%d",&c1);
int arr1[r1][c1];
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
    }
}

scanf("%d",&r2);
scanf("%d",&c2);
int arr2[r2][c2],mul[r1][c2];
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
    }
}

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

