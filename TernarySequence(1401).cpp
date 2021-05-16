#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int mini, result;
		int x1, x2, x3;
		cin >> x1 >> x2 >> x3;
		int y1, y2, y3;
		cin >> y1 >> y2 >> y3; \

		mini = min(x1, y3);
		x1 -= mini;
		y3 -= mini;

		mini = min(y1, x2);
		x2 -= mini;
		y1 -= mini;

		result = min(y2, x3) * 2;
		mini = min(y2, x3);
		y2 -= mini;
		x3 -= mini;

		result -= min(x2, y3) * 2;

		cout << result << endl;


	}
}