
#define ll long long
#include<bits/stdc++.h>
using namespace std;
/*
returns 1 if integer is prime or else 0
parameter 1 is integer
return type is bool

NOTE: 1 AND 0 ARE NOT TREATED AS PRIME NUMBERS
*/
bool integer_isprime(int n){
    if(n==0 || n==1 )
        return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        return 0;
    return 1;
}


/*
return parameter one raised to parameter two
both parameters are integers
return type is long long

NOTE:
A) 0 POWER 0 IS UNDEFINED BUT RETURNED AS 1
B) X POWER 0 IS RETURNED AS 1 (X!=0)
C) 0 POWER X IS RETURNED AS 0 (X!=0)

*/
long long power(int a,int b){
    if(b==0)
        return 1;
    if(a==0)
        return 0;
    long long x=1;
    while(b--){
        x*=a;
    }
    return x;
}


//uncomment below to test
int main(){
    int n;
    cout<<power(10,10);

return 0;
}

