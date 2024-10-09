#include<bits/stdc++.h>
using namespace std;

int32_t main(){
#ifndef ONLINE_JUDGE
   freopen("output.txt", "w", stdout);
   freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
#endif
   
int t,n,N;
string S;
cin>>t;
  while(t--){
    cin>>N>>S;
    string t,q;
	int num=N-1,ans=-1,x;
	while(num>0){
		t=S.substr(0,num);
		q=S.substr(N-num,num);
		if(t!=q){
			num--;//not valid
		}
		else{
			string temp=S.substr(0,N-1);
			n=temp.size()-1;
			temp=temp.substr(1,n);
            n=temp.size();
            x=temp.find(t);
            //cout<<t<<endl;
            if(x>=0 && x<n)
			{ans=num;//valid ans
            break;}
            else
            num--;
		}
	}
	if(ans==-1)
	cout<< "not found";
	else
	cout<< S.substr(0,ans);
    cout<<endl;
  }
return 0;
}


