#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x;
	cin >> n;
	int p1, p2;
	cin >> p1;
	set<int> s;
	for (auto i = 0; i < p1; i++) {
		cin >> x;
		s.insert(x);
	}
	cin >> p2;
	for (auto i = 0; i < p2; i++) {
		cin >> x;
		s.insert(x);
	}
	if (s.size() == n) {
		cout << "I become the guy.";
	}
	else
		cout << "Oh, my keyboard!";

}
