#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x = 1, y = 0;
	cin >> n;
	string s, b, c;
	cin >> s;
	for (auto i = 0; i < n - 1; i++) {
		cin >> b;
		if (s == b) {
			x = x + 1;
		}
		else {
			y = y + 1;
			c = b;
		}
	}
	if (x > y)
		cout << s;
	else
		cout << c;

}