#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x, sum = 0, sum1 = 0;
	cin >> n;
	vector<int> v;
	for (auto i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
		sum = sum + x;
	}
	sort(v.begin(), v.end(), greater<int>());
	for (auto i = 0; i < n; i++) {
		sum = sum - v[i];
		sum1 = sum1 + v[i];
		if (sum1 > sum) {
			cout << i + 1 << endl;
			break;
		}
	}
}
