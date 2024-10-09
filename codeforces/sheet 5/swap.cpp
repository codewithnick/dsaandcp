#define ll long long
#include<bits/stdc++.h>
using namespace std;
void swap_num(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap_num(&a,&b);
    cout<<a<<" "<<b;

return 0;
}


