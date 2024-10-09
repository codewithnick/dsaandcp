#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i,j,k;
    cin>>t;
    while(t--){
        cin>>n;
        map<string,bool>m;
        vector<string> arr(n);
        string s,ns="",x,y;
        for(i=0;i<n;i++)
            {cin>>s;
            arr[i]=s;
            m[s]=1;
            }
        for(i=0;i<n;i++){
            s=arr[i];
            ns+='0';
            for(j=1;j<s.size();j++){
                x=s.substr(0,j);
                y=s.substr(j,s.size()-j);
                if(m[x]&&m[y])
                {
                    ns[i]='1';
                    break;
                }
            }
        }
        cout<<ns<<endl;

    }
return 0;
}



