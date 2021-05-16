#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, a, dis, ind, caught = 0;
	cin >> n >> a;
	int arr[n];
	for (auto i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (auto j = 1; j <= n; j++) {
		dis = a - j;
		ind = a + dis;

		if (arr[j] == 1) {
			if (ind <= 0 || ind > n) {
				caught = caught + 1;
			}
			else if (arr[ind] == 1) {
				caught = caught + 1;
			}
		}
	}
	cout << caught;

}
