

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int t;
  cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        if(w==h){
            cout<<"Square\n";
        }
        else
            cout<<"Rectangle\n";
    }
  return 0;
}


