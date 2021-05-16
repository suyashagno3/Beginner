#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, t, x = 1;
	cin >> n >> t;

	if (n == 1 and t == 10)
		cout << -1 << endl;
	else
	{
		cout << t;
		if (t == 10)
			x = x + 1;
		for (x; x < n; x++)
			cout << '0';
	}
}
