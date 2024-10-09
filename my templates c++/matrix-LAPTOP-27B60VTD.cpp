#define ll long long
#include<bits/stdc++.h>
using namespace std;


/*

swaps row with col

*/
void swap_row_col(int arr[0][0],int rows,int cols,int row, int col){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n,i,x,y;
    cin>>n>>x>>y;
    int i,j,arr[row][col];
    for(i=0;i<row;i++)
        for(j=0;j<row;j++)
            cin>>arr[i][j];
    swap_row_col(arr,row,col,0,0);
    return 0;
}

