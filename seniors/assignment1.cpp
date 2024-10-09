#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    map <char,int> mp;
    cin>>str;
    char a,prev=str[0];
    for(int i=str.size();i>=0;i--){
        char s=str[i];
        if(!mp[s]){
            //unique
            mp[s]++;
            prev=s;
        }
    }
    cout<<prev;
    return 0;
}
