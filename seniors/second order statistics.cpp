#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    return a<b;
}
void second_order(vector <int> arr){
    int m=arr[0];
    for(auto it:arr){
        if(it!=m)
            {cout<<it;
            return;
            }

    }
    cout<<"NO";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    cin>>n;
    vector <int> arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),comp);
    second_order(arr);

return 0;
}
