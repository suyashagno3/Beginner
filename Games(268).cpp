#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, count = 0;
	cin >> n;
	int len;
	len = 2 * n - 1;
	int a[len];
	for (auto i = 0; i < 2 * n; i++) {
		cin >> a[i];
	}
	for (auto i = 0; i <= len; i++) {
		if (i % 2 == 0) {
			for (auto j = i + 3; j <= len; j = j + 2) {
				if (a[i] == a[j]) {
					count = count + 1;
				}
			}
		}
		else
		{
			for (auto j = i + 1; j <= len; j = j + 2) {
				if (a[i] == a[j]) {
					count = count + 1;
				}
			}
		}
	}
	cout << count;
}
