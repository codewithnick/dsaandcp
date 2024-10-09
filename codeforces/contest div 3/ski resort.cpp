
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;


    cin>>t;
    while(t--){
            int n,k,q,i,num=0,x,one=0;
            long long sum=0;
        cin>>n>>k>>q;
        vector <bool> arr(n);
        vector <int> cons(n);
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x<=q)
            {
                arr[i]=1;
                num++;
                one++;
            }
            else{
                arr[i]=0;
                one=0;
            }
            cons[i]=one;
        }
        if(num<k)
        {
            cout<<"0\n";
            continue;
        }
        for(i=0;i<n;i++){
            //cout<<cons[i];
            if(cons[i]>=k){
                sum+=cons[i]-(k-1);
            }
        }
        //cout<<endl;
        cout<<sum<<'\n';
    }
return 0;
}




