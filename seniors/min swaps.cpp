#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
	if(a.second==b.second) {
		return a.first > b.first;
	}
	return a.second < b.second;
}

int main() {

	vector<int>vect{5, 4, 3, 2, 1};
	// sort(vect.begin(), vect.end(), comp);

	// for(auto it: vect) {
	// 	cout << it <<" ";
	// }

	vector<pair<int, int>>vp = {{4, 2}, {2, 4}, {1, 3}, {5, 2}, {1, 6}, {2, 3},
		{4, 3}, {6, 7}, {8, 9}
	};
	sort(vp.begin(), vp.end(), comp);

	for(auto it: vp) {
		cout << it.first <<" " << it.second <<"\n";
	}

	return 0;
}
