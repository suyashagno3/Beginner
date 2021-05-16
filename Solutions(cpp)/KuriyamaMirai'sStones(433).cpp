#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	long long arr[n + 1], arr1[n + 1];
	arr[0] = arr1[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		arr1[i] = arr[i];
	}
	sort(arr, arr + n + 1);
	long long t1 = 0, t2 = 0;
	//prefix sum
	for (int i = 0; i <= n; i++) {
		t1 += arr[i];
		t2 += arr1[i];
		arr[i] = t1;
		arr1[i] = t2;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		y--;
		if (x == 1) {
			cout << arr1[z] - arr1[y] << endl;
		}
		else {
			cout << arr[z] - arr[y] << endl;
		}
	}

}
