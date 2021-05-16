#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, a[102], x, y;
	cin >> n;
	for (auto i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	cin >> m;
	while (m--)
	{
		cin >> x >> y;
		a[x - 1] += (y - 1);
		a[x + 1] += (a[x] - y);
		a[x] = 0;
	}
	for (int i = 1; i <= n; ++i)
	{
		cout << a[i] << endl;
	}


}
