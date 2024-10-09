
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,i,ind_min,ind_max,siz_min=1,siz_max=1,l,r;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        ind_max=max_element(arr.begin(),arr.end())-arr.begin();
        i=ind_max;
        if(ind_max==0){
           int secmax=0,sec_maxind=ind_max;//
           for(i=0;i<n;i++){
            if(i!=ind_max){
                if(arr[i]>secmax){
                    secmax=arr[i];
                    sec_maxind=i;
                }
            }
           }
           ind_max=sec_maxind;
        }

            r=ind_max-1;
            l=ind_max;
            while(l>1){
                if(arr[l]>arr[l-1] && arr[l]>arr[0])
                break;
                l--;
            }
            if(l>r)
                r=l;
        cout<<'\n';
        for(i=r+1;i<n;i++){
            cout<<arr[i]<<' ';
        }
        for(i=r;i>=l;i--){
            cout<<arr[i]<<' ';
        }
        for(i=0;i<l;i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    }


return 0;
}





