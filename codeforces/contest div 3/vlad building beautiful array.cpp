#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,even=0,odd=0,minodd=1e9,mineven=1e9,countminodd=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]&1){
                odd++;
                minodd=min(minodd,a[i]);
            }
            else{
                even++;
                mineven=min(mineven,a[i]);
            }
        }

        if(odd==0||even==0)
            cout<<"YES";
        else{
            if(mineven<minodd)
                cout<<"NO";
            else{
                cout<<"YES";
            }
        }
        cout<<"\n";
    }

return 0;
}





