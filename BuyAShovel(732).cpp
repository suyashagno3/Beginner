#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int k, r, x = 0, i = 0, c1;
	cin >> k >> r;

	while (x == 0) {
		i = i + 1;
		c1 = (k * i) % 10;
		if ((c1 == r) || (c1 == 0)) {
			cout << i;
			x = x + 1;
		}
	}
}
