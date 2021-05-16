#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, x, sum, solve = 0;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		sum = 0;
		for (auto j = 0; j < 3; j++) {
			cin >> x;
			sum = sum + x;
		}
		if (sum > 1) {
			solve++;
		}

	}
	cout << solve;

}