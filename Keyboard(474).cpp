#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char c;
	cin >> c;
	string s;
	cin >> s;
	string sample;
	sample = "qwertyuiopasdfghjkl;zxcvbnm,./";
	for (auto i = 0; i < s.size(); i++) {
		auto pos = sample.find(s[i]);

		if (c == 'R')
			cout << sample[pos - 1];
		else if (c == 'L')
			cout << sample[pos + 1];

	}
}