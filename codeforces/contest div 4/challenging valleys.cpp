#include<bits/stdc++.h>
using namespace std;
#define ll long long
void valleys(){
    int n,i,mi=1e9,l=-1,r=-1;
    bool isvalley=0;
        cin>>n;
        vector <int> arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            l=i;
            r=i;
            while(arr[++i]==arr[l])
                r=i;
            i--;
            if((l==0 || arr[l-1]>arr[l]) &&(l>-1) && (r==n-1 ||arr[r+1]>arr[r]))
            {
                    if(isvalley)
                    {
                        cout<<"NO\n";
                        return;
                    }
                    else
                    isvalley=1;
            }
        }
        if(isvalley)
                    {
                        cout<<"YES\n";
                    }
                    else
                    cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
            valleys();
    }
    return 0;
}

