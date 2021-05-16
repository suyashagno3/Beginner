#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[4], count = 0;
	for (auto i = 0; i < 4; i++) {
		cin >> a[i];
	}
	sort(a, a + 4);
	for (auto i = 0; i < 3; i++) {
		if (a[i] == a[i + 1])
		{count = count + 1;}
	}
	cout << count;
}
