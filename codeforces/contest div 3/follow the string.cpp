
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,c=0,x=0;
        cin>>n;
        vector<int> arr(n,0);
        string s="";
        for(int i=0;i<n;i++)
            {
                cin>>arr[i];

            }
        map<int,char>m;
        for(int i=0;i<n;i++){
            int x=arr[i];
            if(m[x]){
                m[x]++;
                char a=m[x];
                s+=a;
            }
            else{
                m[x]='a';
                s+='a';
            }
        }

        cout<<s<<endl;
    }
return 0;
}



