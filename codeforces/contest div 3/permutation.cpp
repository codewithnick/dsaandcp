#include<bits/stdc++.h>
#define long long ll
#define NULL_CHAR '\0'
#define repeat(i,a,b) for(i=a;i<=b;i++)
#define sq(a) a*a
#define sum_of_n(n) n*(n+1)/2
using namespace std;
void nikhil(int testcase){
 //main code here
 int n,i,j;
 cin>>n;
 vector <int>arr(n-1,0);
 for(i=0;i<n-1;i++)
    cin>>arr[i];

 for(i=0;i<n-1;i++){
    vector <int>x;
    x.reserve(n);
    int index=-1;
    for(j=0;j<n-1;j++)
    {
     cin>>x[j];
        if(x[j]!=arr[j])
            index=j;
    }

    if(index!=-1 )//found wrong
    {
        int found=0;
        for(j=index+1;j<n-1;j++)
            if(x[index]==arr[j])
            {found=1;
            break;
            }
        if(found==0 &&arr.size()<n)//element does not exist
        {
            //cout<<endl<<"inserted "<<x[index]<<" at "<<index<<endl;
            //arr.insert(arr.begin()+index,x[index]);
            arr.push_back(x[index]);
        }
    }

 }
 for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
 cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        nikhil(t);
    }
    return 0;
}


