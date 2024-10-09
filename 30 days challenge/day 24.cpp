#include<bits/stdc++.h>
using namespace std;
int countSubstring(const string& str, const string& sub)
{
	if (sub.length() == 0) return 0;
	int count = 0;
	for (size_t offset = str.find(sub); offset != string::npos;offset = str.find(sub, offset + sub.length()))
	{
		++count;
	}
	return count;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
	cin>>s;
	int x=countSubstring(s,"Danil");
	x+=countSubstring(s,"Olya");
	x+=countSubstring(s,"Slava");
	x+=countSubstring(s,"Ann");
	x+=countSubstring(s,"Nikita");
	if(x==1)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}


