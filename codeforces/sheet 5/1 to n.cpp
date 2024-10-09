
#include<bits/stdc++.h>
using namespace std;
int add(int x,int y){
    return x+y;
}
void printrange( int n){
for(int i=1;i<=n;i++){
    cout<<i;
    if(i<n){
        cout<<" ";
    }
}
}
#define ll long long
int main(){
    int n;
    cin>>n;
    printrange(n);

return 0;
}
