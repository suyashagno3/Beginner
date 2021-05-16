#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, b, y = 0, wa, wb;
	cin >> a >> b;
	wa = a;
	wb = b;
	while (wa <= wb) {
		wa = wa * 3;
		wb = wb * 2;
		y = y + 1;

	}
	cout << y;


}