#include<bits/stdc++.h>
#define long long ll
#define NULL_CHAR '\0'
#define repeat(i,a,b) for(i=a;i<=b;i++)
#define sq(a) a*a
#define sum_of_n(n) n*(n+1)/2
using namespace std;
void nikhil(int testcase){
 //main code here
 int i;
 string s,pi="3141592653589793238462643383279";
 cin>>s;
 for(i=0;i<s.size();i++){
    if(s[i]!=pi[i])
        break;
 }
 cout<<i<<endl;
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
