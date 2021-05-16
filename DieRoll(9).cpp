#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b, res, ss, g;
	cin >> a >> b;
	res = max(a, b);
	ss = 7 - res;
	g = __gcd(ss, 6);
	cout << (ss / g) << "/" << (6 / g);

}