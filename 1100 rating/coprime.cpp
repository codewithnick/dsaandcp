#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    bool flag=0;
    cin>>t;
    while(t--){
           int i,j;
    cin>>n;
    flag=0;
    vector<int> arr(n),nr;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=n-1;i>=0 &&flag==0;i--){
        for(j=n-1;j>=i &&flag==0;j--)
            if(__gcd(arr[i],arr[j])==1)
            {
                flag=1;
                i++;
                break;
            }
    }
    if(flag==0)
        cout<<-1<<endl;
    else
        cout<<i+j+2<<endl;
    }
return 0;
}


