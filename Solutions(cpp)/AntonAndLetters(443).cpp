#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	set<char> a;
	getline(cin, s);

	int i = 0;
	while (s[i])
	{
		if (isalpha(s[i]))
			a.insert(s[i]);
		i++;
	}

	cout << a.size() << endl;
}
