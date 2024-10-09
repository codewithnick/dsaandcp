#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,lar1=1,lar2=1,x,i,temp;
        bool lar2ex=0;
        cin>>n;
        vector <int> str(n);
        for(i=0;i<n;i++){
            cin>>x;
            str[i]=x;
            if(lar1<x){
                lar1=x;
                temp=i;
            }
        }
        for(i=0;i<n;i++){
            if(i==temp)
                continue;
            x=str[i];
           // cout<<"lar 1 "<<lar1<<"lar 2 "<<lar2<<"\n";
            lar2=max(x,lar2);
        }

        for(i=0;i<n;i++){
            if(str[i]==lar1){
                str[i]-=lar2;
            }
            else{
                str[i]-=lar1;
            }
            cout<<str[i]<<" ";
            }
        cout<<"\n";
    }
    return 0;
}
