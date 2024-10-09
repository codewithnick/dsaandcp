/*
Write a C++ program that takes a vector of strings and returns only those strings that contain a number(s).
Return empty vector if none.
Example:
Input :
red green23 1black white
Output : 
green23 1black
*/
#include <bits/stdc++.h>

using namespace std;
bool isnumstr(string s){
    for(auto c:s){
        if(48<= c && c<58){
            return true;
        }
    }
    return false;
}
vector <string> getalnumvector(vector <string> v){
    vector <string> v1;
    for(auto value:v){
        if(isnumstr(value))
            v1.push_back(value);
    }
    return v1;
}
int main()
{
    vector <string> v;
    int i,n;
    cin>>n;
    for(i=0;i<n;i++ ){
        string s;
        cin>>s;
        v.push_back(s);
    }
    v=getalnumvector(v);
    for(auto value:v){
        if(isnumstr(value))
            cout<<value<<" ";
    }
return 0;
}
