#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, k;
	cin >> n;
	double r1 = -1, p1 = -1, p2 = 1e8;
	for (int i = 0; i < n; i++) {
		double x;
		cin >> x;
		r1 = max(r1, x);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		double y;
		cin >> y;
		p1 = max(p1, y);
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		double z;
		cin >> z;
		p2 = min(p2, z);
	}
	int A, B;
	cin >> A >> B;
	double r2 = r1 * sqrt((p1 * B) / ((p2 * A) + (p1 * B)));
	cout << fixed << setprecision(7) << r2;
}