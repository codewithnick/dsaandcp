
#include <stdio.h>
int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main(){
int a,b;
printf("enter  2 numbers \n");
scanf("%d",&a);
scanf("%d",&b);
printf("the gcd is %d",gcd(a,b));
return 0;
}

