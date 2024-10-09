#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,i,x,y,draw=0;
    cin>>n>>a>>b;
    vector<pair<int,int>> arr;
    for(i=0;i<n-2;i++){
         if(a==0 && b==0)
    {arr.push_back({0,0});
    draw++;
    }
        else if(a>=b)
            {arr.push_back(make_pair(1,0));
            a--;
            }
        else if(a<b)
        {arr.push_back({0,1});
        b--;}
    }
    if(n>1)
    if(a==0 && b==0)
    {arr.push_back({0,0});
    draw++;
    }

    else if(a==0)
    {arr.push_back({0,1});
    b--;
    }
    else if(b==0)
    {arr.push_back({1,0});
    a--;
    }
    else if(a>=b)
    {arr.push_back({a,0});
    if(a==b)
        draw++;
    a=0;
    }
    else{
        arr.push_back({0,b});
        b=0;
    }
    if(a==b)
        draw++;
    arr.push_back({a,b});
    cout<<draw<<endl;
    for(i=0;i<n;i++)
            cout<<arr[i].first<<":"<<arr[i].second<<endl;
    return 0;
}

