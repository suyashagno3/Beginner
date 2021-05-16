#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	float n, t, k, d;
	cin >> n >> t >> k >> d;
	float c;
	c = (k / t);
	cout << c << endl;
	int time = n / c;
	cout << time << endl;
	if (time > d) {
		cout << "YES";
	}
	else
		cout << "NO";
}
