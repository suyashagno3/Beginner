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
	int len;
	for (auto i = 0; i < n; i++) {
		cin >> s;
		len = s.size();
		if (len > 10) {
			cout << s[0] << len - 2 << s[len - 1] << endl;
		}
		else
			cout << s << endl;
	}


}
