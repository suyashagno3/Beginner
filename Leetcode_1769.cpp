#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int length = s.length();
	int moves = 0;
	int answer[length];
	for (auto i = 0; i < length; i++) {
		for (auto j = 0; j < length; j++) {
			if ((s[j] - '0') != 0) {
				moves = moves + (abs(i - j) * (s[j] - '0'));
			}
		}
		answer[i] = moves;
		cout << answer[i] << " ";
		moves = 0;
	}
}

