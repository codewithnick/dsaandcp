
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sumof(vector <int> &arr,int s,int e){
    int sum=0;
    for(int i=s;i<=e;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {

	// your code here
    long n,m;
    cin>>n>>m;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // binary search
    int left=0,right=arr.size()-1,ans;
    ans=0;
    while(left<=right){
        int siz=right-left;
        int mid= left+(siz)/2;
        int hieght=arr[mid];
        int sum=sumof(&arr,mid,right)-siz*hieght;
        if(sum<m){
            right=mid-11;
        }
        else{

        }
    }

	return 0;
}
