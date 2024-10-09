
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[3],i,j;
        cin>>a[0]>>a[1]>>a[2];
        for (i = 0; i <2; i++)
        for (j = 0; j < 2 - i ; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        cout<<a[1]<<"\n";
    }
    return 0;
}
