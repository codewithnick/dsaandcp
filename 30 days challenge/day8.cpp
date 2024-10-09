
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,l,h;
    cin>>t;
    while(t--){
        cin>>l>>h;
        if(l*2<=h)
            cout<<l<<" "<<l*2;
        else
            cout<<-1<<" "<<-1;
        cout<<endl;
    }

return 0;
}

