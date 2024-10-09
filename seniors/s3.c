#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	map<char,int> m;
	cin>>s;
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	for(int i=0;i<s.size();i++){
        if(m[s[i]]==1)
        {
            cout<<s[i];
            break;
        }
	}
	return 0;
}

