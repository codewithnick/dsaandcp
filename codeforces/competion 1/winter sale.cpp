
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    long x;
    long p;
    cin>>x>>p;
    float temp=(float)(p*100)/(100-x);
    cout<<fixed<<setprecision(2)<<temp;
    return 0;
}

