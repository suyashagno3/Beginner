#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, count = 0;
	cin >> n;
	string s;
	cin >> s;
	for (auto i = 0; i < s.size(); i++) {
		if (s[i] == s[i + 1]) {
			count = count + 1;
		}
	}
	cout << count;

}