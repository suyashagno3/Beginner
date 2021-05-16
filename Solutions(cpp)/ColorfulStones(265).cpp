#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int count = 1, j = 0;
	string s, t;
	cin >> s;
	cin >> t;
	for (auto i = 0; i < t.size(); i++) {
		if (t[i] == s[j]) {
			count = count + 1;
			j = j + 1;
		}
	}
	cout << count;

}
