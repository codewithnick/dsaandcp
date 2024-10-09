#include <bits/stdc++.h>

using namespace std;
void dfs(int root,vector<vector<int>>&tree,map<pair<int,int>,int> &weights, vector<int>& minActivity,vector<bool>visited,int curr,int &ans,int curr_ans){
    vector<int> links=tree[root];
    if(minActivity[root-1]<curr){
        curr_ans++;
        ans=max(curr_ans,ans);
    }
    for(auto node:links){
        dfs(node,tree,weights,minActivity,visited,curr+weights[{root,node}],ans,curr_ans);
        dfs(node,tree,weights,minActivity,visited,curr,ans,curr_ans+1);
    }
}
int getMinServers(int serverNodes, vector<int>& serverFrom, vector<int>& serverTo, vector<int>& serverWeight, vector<int>& minActivity) {
    vector<vector<int>>tree(serverNodes+1);
    vector<bool>visited(serverNodes+1);
    map<pair<int,int>,int> weights;
    int ans=0;
    for( int i=0;i<serverNodes-1;i++){
        tree[serverFrom[i]].push_back(serverTo[i]);
        weights[{serverFrom[i],serverTo[i]}]=serverWeight[i];
    }
    dfs(1,tree,weights,minActivity,visited,0,ans,0);
    return ans;
}

int main() {
    int serverNodes;

    // Input: Number of server nodes
    cout << "Enter the number of server nodes: ";
    cin >> serverNodes;

    vector<int> serverFrom(serverNodes - 1);
    vector<int> serverTo(serverNodes - 1);
    vector<int> serverWeight(serverNodes - 1);
    vector<int> minActivity(serverNodes);

    // Input: server_from, server_to, server_weight arrays
    cout << "Enter the server_from values:" << endl;
    for (int i = 0; i < serverNodes - 1; i++) {
        cin >> serverFrom[i];
    }

    cout << "Enter the server_to values:" << endl;
    for (int i = 0; i < serverNodes - 1; i++) {
        cin >> serverTo[i];
    }

    cout << "Enter the server_weight values:" << endl;
    for (int i = 0; i < serverNodes - 1; i++) {
        cin >> serverWeight[i];
    }

    cout << "Enter the min_activity values:" << endl;
    for (int i = 0; i < serverNodes; i++) {
        cin >> minActivity[i];
    }

    // Call the getMinServers function with the inputs
    int result = getMinServers(serverNodes, serverFrom, serverTo, serverWeight, minActivity);

    // Output the result
    cout << "Minimum number of servers required: " << result << endl;

    return 0;
}
