#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n + 1];
	for (auto i = 1; i < n + 1; i++) {
		int temp;
		cin >> temp;
		a[temp] = i;
	}
	int pos, num = n;
	for (int i = 1; num > 0; i++) {
		pos = a[num];
		if (i == pos && num > 0) {
			cout << num << " ";
			num--;
			int x = a[num];
			while (x < pos && num > 0) {
				cout << num << " ";
				num--;
				x = a[num];
			}
		}
		cout << endl;
	}
}
