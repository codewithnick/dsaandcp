#include<bits/stdc++.h>
#define NULL_CHAR '\0'
#define repeat(i,a,b) for(i=a;i<=b;i++)
#define sq(a) a*a
#define sum_of_n(n) n*(n+1)/2
using namespace std;

void nikhil(int testcase){
    int i,n;
    long long cnt;
    cin>>n;
    vector<long long> v(n);
    for(i=0;i<n;i++)
    cin>>v[i];
    long long sum=0,minelem=INT_MAX,neg=0;
    for(auto &i:v)
    {
        if(i<0){
            neg++;
            i=-i;
        }
        sum+=i;
        minelem=min(i,minelem);
    }

        if(neg&1){
            cout<<sum-minelem*2<<endl;
        }else{
            cout<<sum<<endl;
        }

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



