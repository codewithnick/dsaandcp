
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,l=0,r=0;
        bool flag=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            char a=s[i];
            if(a=='B'){
                if(flag==0)
                    {l=r=i;flag=1;}
                else
                    r=i;
            }
        }
        cout<<r-l+1<<endl;
    }



return 0;
}


