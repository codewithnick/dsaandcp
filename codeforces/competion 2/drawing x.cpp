#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int x,i,j;
    cin>>x;
    //printing first part
    for(i=0;i<x/2;i++){
       for(j=i;j>0;j--)
        cout<<"*";
       cout<<"\\";
       for(j=x-((i+1)*2);j>0;j--)
        cout<<"*";
       cout<<"/";
       for(j=i;j>0;j--)
        cout<<"*";
       cout<<"\n";
    }
    //printing x;
    for(j=x/2;j>0;j--)
        cout<<"*";
    cout<<"X";
    for(j=x/2;j>0;j--)
        cout<<"*";
    cout<<"\n";
    //printing secong part
    for(i=(x/2)-1;i>=0;i--){
        for(j=i;j>0;j--)
            cout<<"*";
        cout<<"/";
        for( j=x-((i+1)*2);j>0;j--)
            cout<<"*";
        cout<<"\\";
        for(j=i;j>0;j--)
            cout<<"*";
       if(i>0)
        cout<<"\n";
    }
  return 0;
}




