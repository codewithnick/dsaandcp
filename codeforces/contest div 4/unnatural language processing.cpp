#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s,ns="";
        cin>>n>>s;
        bool prev=1;//for vowel 1 else 0
        bool cv=0;//if cv combo is made

        for(char c:s){
            if(c=='a' || c=='e')//vowel
            {
                if(prev)

                    ns+='.';

                ns+=c;
                prev=1;
            }
            else//consonant
            {
                if(!prev){
                    ns+='.';
                    ns+=c;
                }
                else{
                    ns+=c;
                    ns+='.';
                }
                prev=0;
            }
        }
        cout<<ns<<endl;
    }
    return 0;
}
