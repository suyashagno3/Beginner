#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	int up = 0, low = 0;
	cin >> s;
	for (auto i = 0; i < s.size(); i++) {
		if (isupper(s[i]) != 0) {
			up = up + 1;
		}
		else
			low = low + 1;
	}
	if (low >= up) {
		for (auto i = 0; i < s.size(); i++) {
			s[i] = char(tolower(s[i]));
		}
	}
	else {
		for (auto i = 0; i < s.size(); i++) {
			s[i] = char(toupper(s[i]));
		}
	}
	cout << s;
}