#include<bits/stdc++.h>
using namespace std;
struct hero{
    string name;
    int acc,sp,stup;

};
bool comp(struct hero a,struct hero b){
    if(a.acc>b.acc)
       return 1;
    else if(a.sp>b.sp)
        return 1;
    else if(a.stup<b.stup)
        return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector <hero> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].name;
        cin>>arr[i].acc;
        cin>>arr[i].sp;
        cin>>arr[i].stup;
    }
    sort(arr.begin(),arr.end(),comp);
     for(int i=0;i<n;i++){
        cout<<arr[i].name<<endl;
    }
    return 0;
}
