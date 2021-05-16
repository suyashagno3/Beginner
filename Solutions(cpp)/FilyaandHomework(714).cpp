#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n;
	cin >> n;
	int b[3];
	int a[n], k = 0;
	set<int> s;
	for (auto i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	if (s.size() == 3) {
		for (auto i = s.begin(); i != s.end(); ++i) {
			b[k] = *i;
			k = k + 1;
		}
		sort(b, b + k);
	}

	sort(a, a + n);
	if (s.size() <= 2) {
		cout << "YES";
		exit(0);
	}
	if (s.size() > 3) {
		cout << "NO";
	}
	else
	{
		if (b[1] - b[0] == b[2] - b[1]) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}

	}


}
