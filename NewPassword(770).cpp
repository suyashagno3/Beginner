#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	char x;
	int a = 0;
	cin >> n >> k;
	vector<char> v;
	for (auto i = 97; i < 97 + k; i++) {
		x = char(i);
		v.push_back(x);
	}
	while (v.size() < n) {
		v.push_back(v[a]);
		a = a + 1;
		if (a == k) {
			a = 0;
		}

	}
	for (auto i = 0; i < v.size(); i++) {
		cout << v[i];
	}


}
