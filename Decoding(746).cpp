#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	string s;
	cin >> s;

	vector<char> v;
	while (n != 0) {
		if (n % 2 == 1) {
			v.push_back(s[0]);
		}
		else {
			v.insert(v.begin(), s[0]);
		}
		s.erase(0, 1);
		n = s.length();
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}

}
