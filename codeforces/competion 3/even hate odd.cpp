#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,i,j,eve,odd;
    eve=odd=0;
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
            eve+=1;
        else
            odd+=1;
    }
    if(n%2==0){
        cout<<abs(eve-odd)/2<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }


  }
    return 0;
}



