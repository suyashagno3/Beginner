#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, a = 0, d = 0;
	cin >> n;
	string result;
	cin >> result;
	for (auto i = 0; i < n; i++) {
		if (result[i] == 'A')
		{
			a = a + 1;
		}
		else
			d = d + 1;
	}
	if (a > d) {
		cout << "Anton";
	}
	else if (a < d) {
		cout << "Danik";
	}
	else
		cout << "Friendship";

}