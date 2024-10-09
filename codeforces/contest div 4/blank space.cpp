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
        int n,bs=0,bst=0;
        cin>>n;
        bool temp;
        for (int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp)
                bst=0;
            else{
                bst++;
                bs=max(bs,bst);
            }
        }
        cout<<bs<<endl;

    }

return 0;
}





