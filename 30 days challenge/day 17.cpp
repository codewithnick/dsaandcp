
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
int t;
cin>>t;
while(t--)
  {
    int i,j,n,m,x=0;
    string a="0110",b="1001",s;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        x=i%4;
        if(x==0||x==3)
            s=a;
        else
            s=b;
        for(j=0;j<m;j++)
        {
            cout<<s[j%4]<<" ";
        }
        cout<<endl;
    }
  }
return 0;
}



