#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int t,i,j;
cin>>t;
int arr[26];
for(i=0;i<26;i++){
    arr[i]=0;
}
while(t--){
    char c;
    cin>>c;
    arr[c-97]++;
}
for(i=0;i<26;i++){
    j=arr[i];
    //cout<<arr[i];
    while(j--)
        cout<<(char)(97+i);
}
return 0;
}






