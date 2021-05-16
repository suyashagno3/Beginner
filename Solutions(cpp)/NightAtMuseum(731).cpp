#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	int len = s.size();
	char start = 'a';
	int ans = 0;
	for (int i = 0; i < len; i++)
	{
		int x = start - s[i];
		int y = s[i] - start;
		if (x < 0)
			x += 26;
		if (y < 0)
			y += 26;

		ans += min(x, y);
		start = s[i];
	}

	cout << ans;
}
