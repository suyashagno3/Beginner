#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, count = 0, min, max;
	cin >> n;
	int a[n];
	for (auto i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	min = a[0];
	max = a[n - 1];
	for (auto i = 0; i < n; i++) {
		if (a[i] > min && a[i] < max) {
			count = count + 1;
		}
	} cout << count;
}
