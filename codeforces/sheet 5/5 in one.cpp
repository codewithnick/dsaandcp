#include<bits/stdc++.h>
using namespace std;
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
bool integer_isprime(int n){
    if(n==0 || n==1 )
        return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        return 0;
    return 1;
}
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
    //cout<<"\ndivisor of "<<a<<" is "<<d<<"\n";
    return d;
}
void five_in_one(int arr[],int n){
    int i,mi=1e9,ma=-1e9,prime=0,div=0,pal=0,temp,x=0;
    for(i=0;i<n;i++){
        mi=(mi<arr[i]?mi:arr[i]);
        ma=(ma>arr[i]?ma:arr[i]);
        if(integer_isprime(arr[i]))
            prime++;
        if(checkPalindrome(arr[i]))
            pal++;
        temp=number_of_divisors(arr[i]);
        if(temp>div){
            div=temp;
            x=i;
        }
        if(temp==div && arr[i]>arr[x]){
             x=i;
        }
    }
cout<<"The maximum number : "<<ma;
cout<<"\nThe minimum number : "<<mi;
cout<<"\nThe number of prime numbers : "<<prime;
cout<<"\nThe number of palindrome numbers : "<<pal;
cout<<"\nThe number that has the maximum number of divisors : "<<arr[x];
}

#define ll long long
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
five_in_one(arr,n);
return 0;
}




