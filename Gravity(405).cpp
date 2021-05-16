#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x;
	cin >> x;
	int arr[x - 1];
	for (auto i = 0; i < x; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + x);
	for (auto i = 0; i < x; i++) {
		cout << arr[i] << " ";
	}



}