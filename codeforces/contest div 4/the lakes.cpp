
#include<bits/stdc++.h>
using namespace std;
class grid{
    public:
    int row,col;
    vector<vector<int>> matrix,visited,volume;
    grid(int n, int m){
        row=n;col=m;
        for(int i=0;i<n;i++){
            vector <int> temp(m),temp2(m,0);
            for(int j=0;j<m;j++){
                cin>>temp[j];
            }
            matrix.push_back(temp);
            volume.push_back(temp2);
            visited.push_back(temp2);
        }
    }
    int getvolumes(){
        int volumes=0;
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    volume[i][j]=getpath(i,j);
                    volumes=max(volumes,volume[i][j]);
                }
            }
        return volumes;
    }
    int getpath(int i,int j){

        if(getpos(i,j)==0)
            return 0;
        if(visited[i][j])
            return 0;
        int a=getpos(i-1,j),b=getpos(i+1,j),c=getpos(i,j+1),d=getpos(i,j-1),x=getpos(i,j);
        visited[i][j]=1;
        if(a)
            x+=getpath(i-1,j);
        if(b)
            x+=getpath(i+1,j);
        if(c)
            x+=getpath(i,j+1);
        if(d)
            x+=getpath(i,j-1);
        return x;
    }

    void printarr(){
        cout<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<volume[i][j];
            }
            cout<<endl;
        }
    }
    int getpos(int i,int j){
        if(i<0 || j<0 || i>=row || j>=col)
            return 0;
        return matrix[i][j];
    }
};
int32_t main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        grid g(n,m);
        cout<<g.getvolumes()<<endl;
    }

return 0;
}






