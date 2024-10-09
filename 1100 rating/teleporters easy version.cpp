#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,c,i,x,cnt;
    cin>>t;
    while(t--){
       cin>>n>>c;
       cnt=0;
       vector <long long >arr(n);
       for(i=0;i<n;i++){
            cin>>x;
            arr[i]=x+i+1;
       }
       sort(arr.begin(),arr.end());
       for(i=0;i<n;i++){
        if(arr[i]>c)
            break;
            c-=arr[i];
            cnt++;
       }
       cout<<cnt<<endl;
    }

return 0;
}


