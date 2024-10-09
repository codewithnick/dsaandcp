
#include<bits/stdc++.h>
#define long long ll
#define NULL_CHAR '\0'
#define repeat(i,a,b) for(i=a;i<=b;i++)
#define sq(a) a*a
#define sum_of_n(n) n*(n+1)/2
using namespace std;
void nikhil(int testcase){
 //main code here
 int i,n,minimum=1e9,maximum=-1e9;
 cin>>n;
 vector<int>arr(n);
 for(i=0;i<n;i++)
    {
        cin>>arr[i];
        minimum=(minimum<arr[i])?minimum:arr[i];
        maximum=(maximum>arr[i])?maximum:arr[i];
    }
 for(i=0;i<n;i++){
    if(arr[i]%minimum==0)
        continue;
    else
    {
        if(arr[i]%minimum<minimum)
        {
            minimum=arr[i]%minimum;
            i=0;
        }
    }
 }
 cout<<maximum/minimum<<endl;
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
