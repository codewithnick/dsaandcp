#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int calculateOR(const vector<int>& arr, int start, int end) {
    int result = 0;
    for (int i = start; i <= end; ++i) {
        result |= arr[i];
    }
    return result;
}


int maxFValue(vector<int>& A, int N, int K) {
    int maxF = 0;


    for (int i = 0; i < (1 << N); ++i) {
        vector<int> subsequence;
        for (int j = 0; j < N; ++j) {
            if (i & (1 << j)) {
                subsequence.push_back(A[j]);
            }
        }


        if (subsequence.size() == 2 * K) {
            int part1OR = calculateOR(subsequence, 0, K - 1);
            int part2OR = calculateOR(subsequence, K, 2 * K - 1);
            int F = part1OR ^ part2OR;
            maxF = max(maxF, F);
        }
    }

    return maxF;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << maxFValue(A, N, K) << endl;

    return 0;
}
