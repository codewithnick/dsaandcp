#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to perform DFS and return subtree sums
long long dfs(int node, int parent, const vector<vector<int>> &tree, const vector<int> &A, vector<long long> &subtree_sums) {
    long long subtree_sum = A[node];
    for (int neighbor : tree[node]) {
        if (neighbor != parent) {
            subtree_sum += dfs(neighbor, node, tree, A, subtree_sums);
        }
    }
    subtree_sums[node] = subtree_sum;
    return subtree_sum;
}

// Function to update values in the subtree rooted at 'node'
void update_values(int node, int parent, vector<long long> &A, const vector<vector<int>> &tree, int K) {
    A[node] /= K;
    for (int neighbor : tree[node]) {
        if (neighbor != parent) {
            update_values(neighbor, node, A, tree, K);
        }
    }
}

long long maximumSum(int N, int* edges, int* A, int K) {
    // Construct adjacency list for the tree
    vector<vector<int>> tree(N);
    for (int i = 0; i < N - 1; ++i) {
        int u = edges[2 * i];
        int v = edges[2 * i + 1];
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    // Convert A to a vector of long long for easier manipulation
    vector<long long> values(A, A + N);

    // Perform a DFS to calculate initial subtree sums
    vector<long long> subtree_sums(N, 0);
    dfs(0, -1, tree, values, subtree_sums);

    // Update the values in the subtree rooted at node 0
    update_values(0, -1, values, tree, K);

    // Perform DFS again to calculate the new subtree sums
    dfs(0, -1, tree, values, subtree_sums);

    // Find the maximum subtree sum
    long long max_sum = *max_element(subtree_sums.begin(), subtree_sums.end());

    return max_sum;
}

int main() {
    int N = 5;
    int edges[] = {0, 1, 0, 2, 1, 3, 1, 4};
    int A[] = {3, 4, 5, 6, 7};
    int K = 12;

    cout << "Maximum sum after updates: " << maximumSum(N, edges, A, K) << endl;

    return 0;
}
