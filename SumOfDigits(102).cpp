#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int counter = 0;
	int len = s.length();
	while (len > 1) {
		int sum = 0;
		for (int i = 0; i < len; i++) {
			sum += s[i] - '0';
		}
		s = to_string(sum);
		len = s.length();
		counter = counter + 1;
	}
	cout << counter;

}
