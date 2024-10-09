#include<bits/stdc++.h>
using namespace std;
void print (string b){
    int i=0;
    while(b[i]=='0')i++;
    for(;i<b.size();i++)
        cout<<b[i];
}
void solve(){
       string s,a,b="";
       cin>>a>>s;
        int i,j,x,y;
        reverse(a.begin(),a.end());
        reverse(s.begin(),s.end());
       for(i=0,j=0;j<s.size();i++,j++){
            if(i==a.size())
                {x=0;i=a.size()-1;}
            else
                x=a[i]-48;

            y=s[j]-48;
            if(x>y)
            {
                if(j==s.size()-1)
                    {cout<<-1;return;}
                string temp=s.substr(j,2);
                reverse(temp.begin(),temp.end());
                y=stoi(temp);
                j++;
                if(y>18)
                    {cout<<-1;return;}
            }
            int z=y-x;
            if(z<0)
                {cout<<-1;return;}
            b+=char(z+48);
       }

       reverse(b.begin(),b.end());
       if(i==a.size())
            print(b);
        else
            cout<<-1;

}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,i,j;
    cin>>t;
    while(t--){
    solve()  ;
    cout<<endl;
    }
return 0;
}
