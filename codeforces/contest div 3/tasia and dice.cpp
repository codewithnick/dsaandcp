#include<bits/stdc++.h>
#define long long ll
#define NULL_CHAR '\0'
#define repeat(i,a,b) for(i=a;i<=b;i++)
#define sq(a) a*a
#define sum_of_n(n) n*(n+1)/2
using namespace std;
void nikhil(int testcase){
 //main code here
 int n,s,r,x,i;
 cin>>n>>s>>r;
 x=n-1;
 vector <int>arr(x,r/x);
 arr.push_back(s-r);
 r%=x;
 for(i=0;i<n;i++){
    if(r!=0)
    {
        arr[i]++;
        r--;
    }
    cout<<arr[i]<<" ";
 }
 cout<<endl;
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

