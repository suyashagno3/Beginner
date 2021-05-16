#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	vector<int> a;
	for (auto i = 0 ; i < s.size(); i++) {
		if (s[i] != '+') {
			a.push_back(s[i] - '0');
		}
	}
	sort(a.begin(), a.end());
	for (auto i = 0; i < a.size() - 1; i++) {

		cout << a[i] << '+';
	}
	cout << a[a.size() - 1];
}
