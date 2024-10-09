#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  ll i,c=0,num;
  string str,n;
  getline(cin,n);
  num=stoi(n);
  getline(cin,str);
  int arr[num];
  for(i=0;i<num;i++){
    arr[i]=(int)str[i] -48;
    c+=arr[i];
  }
  cout<<c;
  return 0;
}

