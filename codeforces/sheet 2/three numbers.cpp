#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int k,s,x,y,z,c=0;
cin>>k>>s;
for(x=0;x<=k;x++){
    for(y=0;y<=k;y++){
        z=s-x-y;
        if(0<=z && z<=k)
            c++;
    }
}
cout<<c;
  return 0;
}




