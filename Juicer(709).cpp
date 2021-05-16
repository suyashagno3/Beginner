#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, b, d, squeeze = 0, waste = 0;
	cin >> n >> b >> d;
	int a[n];
	for (auto i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] <= b) {
			{	squeeze = squeeze + a[i];
				if (squeeze > d) {
					waste = waste + 1;
					squeeze = 0;
				}

			}
		}
	}
	cout << waste;

}
