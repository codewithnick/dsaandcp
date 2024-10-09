
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int arr[500][500];

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    x--;y--;
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>arr[i][j];

    for(i=0;i<n;i++)
        swap(arr[x][i],arr[y][i]);
    for(i=0;i<n;i++)
        swap(arr[i][x],arr[i][y]);
    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";

        }
    return 0;
}


