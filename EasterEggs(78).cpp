#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	string s = "ROYGBIV";
	int x = 3;
	if (n == 7) {
		cout << s;
	}
	else
	{
		n = n - 7;
		cout << s;
		while (n > 0) {
			cout << s[x];
			if (x == 6) {
				x = 3;
			}
			else
				x = x + 1;
			n = n - 1;
		}
	}


}
