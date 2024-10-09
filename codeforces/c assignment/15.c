#include <stdio.h>
int main(){
int i=105,c=0;
float sum=0;
while(i<200){
    printf("%d\n",i);
    sum+=i;
    i+=7;
    c+=1;

    if(c==10)
        break;
}
printf("\nthe sum is %.0f \naverage is %f",sum,sum/c);
}
