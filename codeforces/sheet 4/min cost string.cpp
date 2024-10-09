#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll getstringcost(string s,ll arr[]){
ll i,cost=0,first,second;
for(i=0;i<(s.length()-1);i++){
    first=s[i]-97;
    second=s[i+1]-97;
    //cout<<"first "<<first<<" second "<<second<<"\n";
    //if(first<=26 && first >=0 && second>=0 && second<=26)
    cost+=abs(arr[first]-arr[second]);
}
return cost;
}

int main(){
string s,ns;
cin>>s;
ll i,j,k,c,arr[26],mincost,maxcost,value;
for(i=0;i<26;i++){
    cin>>arr[i];
}
/*
for(i=0;i<26;i++){
    cout<<(char)(i+97)<<" ";
}
cout<<"\n";
*/
for(i=0;i<s.length();i++){
    j=i;
    if(i>0)
    mincost=arr[s[i-1]-97];
    else
    mincost=1e9;
    c=0;
    while(s[j]=='?' && j<s.length()){
        j++;
        c++;
    }

    if(j<s.length())
        maxcost=arr[s[j]-97];
    else
    maxcost=1e9;
    //cout<<c<<" c\n";
    //cout<<"i= "<<i<<" j= "<<j<<"\n";
    i=j;
    if(maxcost<mincost)
        swap(mincost,maxcost);
    if(maxcost==1e9)
        maxcost=mincost;
    //cout<<"max needed "<<maxcost<<" min needed "<<mincost<<"\n";
    value=0;
    for(k=0;k<26;k++)
    {
        if(arr[k]>=mincost && arr[k]<=maxcost)
        {
            value=k;
            break;
        }
    }
    //cout<<"value is "<<value<<"\n";
    for(k=0;k<c;k++)
        ns+=(char)(value+97);
    i=j;
    if(i<s.length())
    ns+=s[i];
}
cout<<getstringcost(ns,arr)<<"\n"<<ns;
return 0;
}
