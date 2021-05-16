#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, l, h, sereja = 0, dima = 0, maxi;
	cin >> n;
	int a[n - 1];
	for (auto i = 0; i < n; i++) {
		cin >> a[i];
	}
	l = 0;
	h = n - 1;
	for (auto i = 0; i < n; i++) {
		if (a[l] > a[h]) {
			maxi = a[l];
			l = l + 1;
		}
		else {
			maxi = a[h];
			h = h - 1;
		}
		if (i % 2 == 0) {
			sereja = sereja + maxi;
		}
		else
			dima = dima + maxi;

	}
	cout << sereja << " " << dima;
}