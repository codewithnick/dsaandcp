

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            vector<int> a(n),pre_d(n),post_d(n),pre_j(n),post_j(n);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            int even=0,odd=0;
            for(int i=0;i<n;i++){
                if(i&1){
                    odd+=a[i];
                }
                else{
                    even+=a[i];
                }
                pre_d[i]=odd;
                pre_j[i]=even;
            }
            even=0,odd=0;
            for(int i=n-1;i>=0;i--){
                if(i&1){
                    odd+=a[i];
                }
                else{
                    even+=a[i];
                }
                post_d[i]=odd;
                post_j[i]=even;
            }

            int l,r;
            for(int i=0;i<n;i++){

            }
    }
    return 0;
}

