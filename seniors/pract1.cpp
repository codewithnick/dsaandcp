#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<std>
#include<vector>
using namespace std;
int inc(int &x){
    return ++x;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector <int > arr;
    arr.reserve(n);
    for(int i=1;i<=n;i++){
        arr.push_back(i%3+1);
        cout<<i<<" ";
    }
    cout<<endl;
    for(int x:arr){
        cout<<inc(x)<<" ";
    }
    cout<<endl;
    for(int &x:arr){
        cout<<inc(x)<<" ";
    }
    sort(arr.begin(),arr.end(),comp);
    cout<<endl;
    for(auto it=arr.begin();it!=arr.end();it++){
        cout<< *it<<" ";
    }

    return 0;
}
