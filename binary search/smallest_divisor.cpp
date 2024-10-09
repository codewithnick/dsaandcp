#include<bits/stdc++.h>
using namespace std;

int get_sum(vector<int>& nums, int x){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        //cout<<ceil((float)nums[i]/x);
        sum+=ceil(nums[i]/x);
    }
    //cout<<endl<<sum<<" "<<x<<endl;
    return sum;
}
int maxwindow(vector<int>& nums, int x){
    int s=accumulate(nums.begin(),nums.begin()+x,0);
    int ms=0,next=0,prev=0,n=nums.size();
    for(int i=0;i<=n-x;i++){
        
        s-=prev;
        s+=next;
        //cout<<s<<" ";
        ms=max(s,ms);
        prev=nums[i];
        if(i+x<n)
        next=nums[i+x];
        else
        next=0;
        //cout<<prev<<" "<<next<<"\n";
    }
    return ms;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end()),mid,ans=1,sum;
        while(low<=high){
            mid=low+(high-low)/2;
            sum=get_sum(nums,mid);
            if(sum<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }


int main(){
    vector <int> x{1,4,4};
    //cout<<smallestDivisor(x,6);
    cout<<maxwindow(x,3);
    return 0;
}