#include<bits/stdc++.h>
using namespace std;
int dist(int a,int b,int c,int d){
    return abs(a-c)+abs(b-d);
}
int main() {
    int n;
    cin>>n;
    while(n--){
        int w,d,h,a,b,f,g;
        cin>>w>>d>>h>>a>>b>>f>>g;
        int dist1=(w-f)+h+dist(a,b,w,g);
        int dist2=(f)+h+dist(a,b,0,g);
        int dist3=(d-g)+h+dist(a,b,f,d);
        int dist4=g+h+dist(a,b,f,0);
        //cout<<endl<<dist1<<" "<<dist2<<" "<<dist3<<" "<<dist4<<endl;
        cout<<min(min(dist1,dist2),min(dist3,dist4))<<endl;
    }
return 0;
}
