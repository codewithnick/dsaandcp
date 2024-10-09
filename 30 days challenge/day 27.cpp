#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int t,n;
   cin>>t;
   while(t--){
    cin>>n;
    int e=0,o=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        {cin>>arr[i];
        if(arr[i]&1)
            o++;
        else
            e++;
        }
    if(o&1 || e&1)
    {
        //odd no of odd or odd number of even
        bool flag =0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i]+1==arr[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }

   }
return 0;
}




