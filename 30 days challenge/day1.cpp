#include<bits/stdc++.h>
using namespace std;
long long fact(int a){
    if(a==1)
        return 1;
    return a*fact(a-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<fact(min(a,b));
return 0;
}
