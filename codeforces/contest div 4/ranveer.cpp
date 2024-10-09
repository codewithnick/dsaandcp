#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    long long A[n],pre[n+1];
    pre[0]=0;
    for(long long i=0;i<n;i++){ cin>>A[i];}

    for(long long i=0,sum=0;i<n;i++)
    {
        sum+=A[i];
        pre[i+1]=sum;
    }


    for(long long j=1;j<=q;j++)
    {
        long long l,r;
        cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<endl;
    }

    return 0;
}
