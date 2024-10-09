#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,min11=1e9,min10=1e9,min01=1e9;
        cin>>n;
        bool a=0,b=0,c=0;
        for (int i=0;i<n;i++)
        {
            int minute;
            string s;
            cin>>minute>>s;
            if(s=="11"){
                min11=min(min11,minute);
                a=1;
            }
            else if(s=="10"){
                min10=min(min10,minute);
                b=1;
            }
            else if(s=="01"){
                min01=min(min01,minute);
                c=1;
            }
        }

        if(a || (b && c)){
            int x=min(min11,min01+min10);
            if(x)
                cout<<x;
            else
                cout<<max(min11,min01+min10);
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }

return 0;
}






