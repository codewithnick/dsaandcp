#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int n,q,i,j;
    cin>>n>>q;
    ll arr[n],x;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<q;i++)
     {
         cin>>x;
         for(j=0;j<n;j++)
            {
                if(arr[j]==x)
                    break;
            }
            if(j==n)
                cout<<"not found\n";
            else
                cout<<"found\n";
     }

  return 0;

}

