#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++){
                char x;
                cin>>x;
                if(x=='1')
                    sum++;
            }
            arr[i]=sum;
        }

        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1] &&arr[i]>0){
                cout<<"SQUARE\n";
                break;
            }
            else if(arr[i]+2==arr[i+1] &&arr[i]>0)
            {
                cout<<"TRIANGLE\n";
                break;
            }
            else if(arr[i+1]+2==arr[i] &&arr[i]>0)
            {
                cout<<"TRIANGLE\n";
                break;
            }
        }

    }
return 0;
}


