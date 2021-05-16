#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[5][5];
	for (auto i = 0; i < 5; i++) {
		for (auto j = 0; j < 5; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1)
			{
				cout << (abs(2 - i) + abs(2 - j));
				break;
			}
		}
	}


}