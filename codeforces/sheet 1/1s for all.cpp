#include<bits/stdc++.h>
using namespace std;
int sumof(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<((int)log10(n));
return 0;
}
