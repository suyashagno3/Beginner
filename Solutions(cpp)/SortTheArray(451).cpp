#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x, flag = 0;
	cin >> n;
	int l = -1, r = -1;
	vector<int> a(n), b(n);
	for (auto i = 0; i < n; i++) {
		cin >> x;
		a[i] = b[i] = x;
	}
	sort(b.begin(), b.end());
	for (auto i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			l = i;
			break;
		}
	}
	for (auto i = n - 1; i >= 0; i--) {
		if (a[i] != b[i]) {
			r = i;
			break;
		}
	}
	reverse(a.begin() + l, a.begin() + r + 1);
	for (auto i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			flag = 1;
		}
	}
	if (flag == 1) {
		cout << "no";
	}
	else if (l == -1) {
		cout << "yes" << endl;
		cout << "1" << " " << "1";
	}
	else
	{	cout << "yes" << endl;
		cout << l + 1 << " " << r + 1;
	}
}