#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, x;
	int width = 0;
	cin >> n;
	int h;
	cin >> h;
	for (auto i = 0; i < n; i++) {
		cin >> x;
		if (x <= h) {
			width = width + 1;
		}
		else
			width = width + 2;
	}
	cout << width;

}