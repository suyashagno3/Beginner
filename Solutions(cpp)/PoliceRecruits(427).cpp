#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, crime = 0, police = 0;
	cin >> n;
	int event[n - 1];
	for (auto i = 0; i < n; i++) {
		cin >> event[i];
		if (event[i] > 0) {
			police = police + event[i];
		}
		else if ((event[i] < 0) && (police > 0)) {
			police = police - 1;
		}
		else if ((event[i] < 0) && (police == 0)) {
			crime = crime + 1;
		}
	}
	cout << crime;


}