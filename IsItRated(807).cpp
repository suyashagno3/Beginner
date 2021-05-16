#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x = 0;
	cin >> n;
	int a1[n], a2[n], a3[n];
	for (auto i = 0; i < n; i++) {
		cin >> a1[i] >> a2[i];
		if (a1[i] != a2[i]) {
			cout << "rated";
			exit(0);
		}
		a3[i] = a2[i];
	}
	sort(a3, a3 + n, greater<int>());
	for (auto i = 0; i < n; i++) {
		if (a1[i] == a2[i] && a2[i] != a3[i]) {
			cout << "unrated";
			x = x + 1;
			break;
		}
	}
	if (x == 0) {
		cout << "maybe";
	}
}
