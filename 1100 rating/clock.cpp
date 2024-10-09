
#include<bits/stdc++.h>
using namespace std;
class Clocks{
public:
    string hr;
    string mi;
    int h;
    int m;
    Clocks(string s){
        hr=s.substr(0,2);
        mi=s.substr(3,4);
        h=stoi(hr);
        m=stoi(mi);
    }
    void inc(int minutes){
        h=(h+(minutes+m)/60)%24;
        m=(m+minutes)%60;
        hr=to_string(h);
        mi=to_string(m);
        if(h<10)
            hr='0'+hr;
        if(m<10)
            mi='0'+mi;
    }
    bool checkpal(){
        string s=mi;
        reverse(s.begin(),s.end());

        return s==hr;
    }
};
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,c,i,x,cnt,c1,c0;
    cin>>t;
    while(t--){
    string s;
    cin>>s>>x;
    i=cnt=0;
    Clocks c(s);
    while(i<1440){
        if(c.checkpal())
        {
            //
            cnt++;
        }
        c.inc(x);
        cout<<c.hr<<":"<<c.mi<<endl;
        i+=x;
    }
    cout<<cnt<<endl;
    }

return 0;
}


