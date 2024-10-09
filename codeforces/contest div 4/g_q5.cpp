#include <bits/stdc++.h>
using namespace std;
void testcase(int t){
    int n1,n2,ans=0,mx=0;
    string s1,s2;
    cin>>n1>>s1>>n2>>s2;
    vector<int>p(n2);
    vector<bool>perm(n2,0);
    for(int x=0;x<n2;x++){
        cin>>p[x];
    }
    //check if s1 in s2
    int i=0,j=0;
    for(;j<n2&&i<n1;j++){
        if(s1[i]==s2[j]){
            i++;
            perm[j]=1;
        }
    }
    if(i!=n1){
        cout<<-1<<endl;
        return;
    }
    for(j=0;j<n2;j++){
        if(perm[j]&&p[j]>mx)
        {
            ans=j+2;
            mx=p[j];
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    testcase(t);
}
