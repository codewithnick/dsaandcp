#include <stdio.h>
int gcd(int,int);
int main(){
int a,b;
printf("enter  2 numbers \n");
scanf("%d",&a);
scanf("%d",&b);
printf("the gcd is %d",gcd(a,b));
return 0;
}
int gcd(int a,int b){
    while(a!=0 && b!=0){
        int temp=a;
        a=b%a;
        b=temp;
    }
    return (a>b?a:b);
}
