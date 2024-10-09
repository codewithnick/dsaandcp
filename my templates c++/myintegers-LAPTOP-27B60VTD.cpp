
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
return boolean value 1 if number is palindrome else 0
parameter is integer
*/
bool checkPalindrome(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    return (rev == n);
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

/*
return parameter no of divisors of integer
parameter is integer
return type is integer

*/

int number_of_divisors(int a){
    int d=0;
    for(int i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            if(i==sqrt(a))
                d++;
            else
                d+=2;
        }
    }
    return d;
}








//uncomment below to test
int main(){
    int n;
    cin>>n;
    cout<<integer_ispailndrome(n);

return 0;
}

















/*
bool integer_ispailndrome(int n){
    int i;
    if(n>=0 && n<10)
        return 1;
    int x=0;
    for(i=1;i<n;i*=10){}
    i/=10;
    //  the above loop gives us log10(n)
    while(n>0){
        //first digit
        cout<<n/i;
        //cout<<n%10<<"\n";
        n=n-(i*(n/i));
        n/=10;
        //cout<<n<<"\n";
        i/=100;
    }
}
*/
