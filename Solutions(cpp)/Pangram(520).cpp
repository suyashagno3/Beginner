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
	set<char> a;
	if (s.size() < 26) {
		cout << "NO";
	}
	else
	{
		for (auto i = 0; i < s.size(); i++) {
			a.insert(toupper(s[i]));
		}
		if (a.size() == 26) {
			cout << "YES";
		}
		else
			cout << "NO";
	}


}
