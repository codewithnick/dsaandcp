
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,i,j=1,k;
        cin>>n>>k;
        i=0;
        vector<int>arr(n,0);
        bool rev=false;
        while(j<=n){
            if(i>n){
                rev=true;
                i%=n;
            }
            else if(i<0)
            {
                rev=false;
                i-=1;
            }
            if(arr[i])
            {
                if(rev)
                    i-=1;
                else
                    i+=1;
                continue;
            }
            arr[i]=j;
            j++;
            if(rev)
                i-=k;
            else
                i+=k;
        }
        for(auto x:arr)
        cout<<x<<' ';
        cout<<endl;
    }
return 0;
}



