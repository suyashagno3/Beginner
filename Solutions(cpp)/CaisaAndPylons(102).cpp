#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x;
	cin >> n;
	vector<int> v;
	for (auto i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	cout << *max_element(v.begin(), v.end());
}
