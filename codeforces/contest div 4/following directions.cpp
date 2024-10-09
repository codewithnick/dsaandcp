#include<bits/stdc++.h>
#define long long ll
#define NULL_CHAR '\0'
#define repeat(i,a,b) for(i=a;i<=b;i++)
#define sq(a) a*a
#define sum_of_n(n) n*(n+1)/2
using namespace std;
void nikhil(int testcase){
 int n,i;
 cin>>n;
 string s;
 pair<int,int>cord;
 cord=make_pair(0,0);
 cin>>s;
for(i=0;i<n;i++){
    if(s[i]=='U')
        cord.second+=1;
    else if(s[i]=='D')
        cord.second-=1;
    else if(s[i]=='R')
        cord.first+=1;
    else if(s[i]=='L')
        cord.first-=1;
    if(cord.first==1&&cord.second==1)
    {
        cout<<"YES\n";
        return;
    }
 }
 cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        nikhil(t);
    }
    return 0;
}
