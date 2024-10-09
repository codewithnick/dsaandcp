#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,i;
	cin>>n>>m;
	map<int,int> k;
	vector<int> arr(n),marr(m);
	for(i=0;i<n;i++)
        cin>>arr[i];
	for(i=0;i<m;i++)
        cin>>marr[i];
	for(i=n-1;i>=0;i--){
        k[arr[i]]++;
        arr[i]=k.size();
	}
	for(i=0;i<m;i++){
        cout<<arr[marr[i]-1]<<endl;
	}
return 0;
}



