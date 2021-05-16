#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[4];
	int result = 0;
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		int z = s[i] - '0';
		result += arr[z - 1];

	}
	cout << result;

}
