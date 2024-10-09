

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        char a;
        int x=0,sz,i;
        cin>>sz;
        while(sz--){
            cin>>a;
            i=a-97;
            x=x|(1<<i);
        }
        for(i=25;i>=0;i--){
            if(x>>i & 1)
                break;
        }
        cout<<i+1<<"\n";
    }
    return 0;
}
