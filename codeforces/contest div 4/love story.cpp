#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    string s1="codeforces",s2;
    cin>>t;
    while(t--){
        int cnt =0;
        cin>>s2;
        for(int i =0;i<10;i++){
            if(s1[i]!=s2[i])
            cnt++;
        }
        cout<<cnt<<endl;
    }

return 0;
}




