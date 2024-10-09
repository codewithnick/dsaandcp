#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n;
    cin>>t;
    while(t--){
        c                                                              in>>n;
        c
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int c=0,zeros=0;
        bool flag=0;
        for(int i=0;i<n;i++){
            if(arr[i])
                {
                    c=zeros;
                    flag=1;
                }
            else{
                if(flag){
                    zeros++;
                }
            }
        }

        cout<<c<<endl;
    }
return 0;
}
