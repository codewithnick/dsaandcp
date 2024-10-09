#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t,i=0,n,x;
  string s,cat="meow";
  char a;
  cin>>t;
  while(t--){
    cin>>n>>s;
    i=0;
    bool flag=1;
    for(x=0;x<n&&i<4;x++){
        char a=s[x]|' ';
        if(a==cat[i]){}
        else if(flag){
            break;
        }
        else{
                flag=1;
                i++;
                x--;
                continue;
        }
        flag=0;
    }
    if(x==n&&i==3){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
  }
return 0;
}

