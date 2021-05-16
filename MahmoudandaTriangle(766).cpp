#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n;
	int x = 0;
	cin >> n;
	long long int a[n];
	for (auto i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<long long int>());
	for (auto i = 0; i < n - 2; i++) {
		if (a[i + 2] + a[i + 1] > a[i]) {
			x = 1;
		}
	}
	if (x == 1) {
		cout << "Yes";
	}
	else
		cout << "No";


}