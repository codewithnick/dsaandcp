#include<bits/stdc++.h>
#define long long ll
#define NULL_CHAR '\0'
#define repeat(i,a,b) for(i=a;i<=b;i++)
#define sq(a) a*a
#define sum_of_n(n) n*(n+1)/2
using namespace std;
void nikhil(int testcase){
 int n,i,sz;
    cin>>n;
    sz=n;
    string s;
    cin>>s;
    for(i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
            sz-=2;
		else
		break;
    }
    cout<<sz<<endl;
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

