#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long q,t=1,n,c,i,l,j,x,cnt,k,r;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr(n),ind(n),max_and(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
            ind[i]=i;
            max_and[i]=arr[i];
        }
        for(i=0;i<n;i++){
            long long andsum=arr[i];

            for(j=i;j<n;j++){
                andsum=arr[j]&andsum;
                cout<<"and upto "<<j<<" is "<<andsum<<endl;
                if(andsum>=max_and[i]){
                    max_and[i]=andsum;
                    ind[i]=j+1;
                }
            }
            //cout<<ind[i]<<" ";
        }
        //cout<<endl<<endl;
        cin>>q;
        for(i=0;i<q;i++){

            cin>>l>>k;
            l--;
            if(k<=max_and[l]){
                cout<<ind[l]<<" ";
            }
            else{
                cout<<-1<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}



