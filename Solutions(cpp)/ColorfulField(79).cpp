#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, k, t, p, q, index, c = 1;
	cin >> n >> m >> k >> t;
	int a[n * m] = {0};

	for (auto i = 1; i <= k; i++) {
		cin >> p >> q;
		index = (p - 1) * m + q;
		a[index] = -1;
	}
	for (auto i = 1; i <= n * m; i++) {
		if (a[i] != -1) {
			a[i] = c;
			if (c == 3) {
				c = 1;
			}
			else
				c = c + 1;
		}
	}
	for (auto i = 0; i < t; i++) {
		cin >> p >> q;
		index = (p - 1) * m + q;
		if (a[index] == 1) {
			cout << "Carrots" << endl;
		}
		if (a[index] == 2) {
			cout << "Kiwis" << endl;
		}
		if (a[index] == 3) {
			cout << "Grapes" << endl;
		}
		if (a[index] == -1) {
			cout << "Waste" << endl;
		}
	}
}