#include<bits/stdc++.h>
#define long long ll
#define NULL_CHAR '\0'
#define repeat(i,a,b) for(i=a;i<=b;i++)
#define sq(a) a*a
#define sum_of_n(n) n*(n+1)/2
using namespace std;

void nikhil(int testcase){
 int n,i,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>a,b;
    vector<int>pre(n,0),post(n,0);
    for(i=0;i<n;i++)
    {
        a[s[i]]++;
        pre[i]=a.size();
    }
    for(i=n-1;i>=0;i--)
    {
        b[s[i]]++;
        post[i]=b.size();
    }
/*
    for(i=0;i<n;i++){
       cout<<pre[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++){
       cout<<post[i]<<" ";
    }
    cout<<endl;
*/
    for(i=0;i<n-1;i++){
       cnt=(cnt>pre[i]+post[i+1])?cnt:pre[i]+post[i+1];
    }
	cout<<cnt<<endl;
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


