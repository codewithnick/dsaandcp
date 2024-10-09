
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,b,c;
  int x,i,n,m,mc,y,k,j;
  //cin>>t;
  while(t--){
    string s;
    cin>>k>>s;
    n=s.size();
    map<char,bool>m;
    vector<string>arr;
    string ns="";
    for(i=0,j=0;i<n;i++){
        char a=s[i];
        if(k){
            if(m[a]){
                ns+=a;
            }
            else{
                arr.push_back(ns);
                ns=a;
                m[a]=1;
                k--;
            }
        }
        else{
            ns+=a;
        }
    }
    arr.push_back(ns);
    if(k)
        cout<<"NO\n";
    else{
        cout<<"YES\n";
    for(i=1;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    }
  }
return 0;
}


