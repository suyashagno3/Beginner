#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, x = 1;
	cin >> n;
	int a[n - 1];
	for (auto i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (auto i = 0; i < n - 1; i++) {
		if (a[i] != a[i + 1])
			x++;
	}
	cout << x;



}