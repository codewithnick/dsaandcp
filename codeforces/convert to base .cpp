
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    ll X,num=0;
    if(t==1){
        string N;
        cin>>N>>X;
        for(int i=0;i<N.size();i++){
            char c=N[i];
            ll temp;
            if('0'<=c &&c<='9')
                temp=c-48;
            else
                temp=c-65+10;
            num+=temp*(ll)pow(X,N.size() - 1 - i);
        }
        cout<<num;
    }
    else{
        ll N;
        string s="";
        cin>>N>>X;
        if(N==0)cout<<0;
        else
        while(N>0){
            char c=(char)(N%X);
            if(0<=c&&c<=9)
                c+=48;
            else
                c+=65-10;
            s+=c;
            N/=X;
        }
        reverse(s.begin(),s.end());
        cout<<s;
    }

    return 0;
}
