#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	long long int a, b, diff;
	cin >> t;
	for (auto i = 0; i < t; i++) {
		cin >> a >> b;
		diff = abs(a - b);
		if ((diff % 10) == 0) {
			cout << diff / 10 << endl;
		}
		else
			cout << (diff / 10) + 1 << endl;
	}

}