#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long n, k;
	cin >> n >> k;
	if (k <= (n + 1) / 2)
	{
		cout << k * 2 - 1 << endl;
	}
	else
	{
		cout << (k - (n + 1) / 2) * 2 << endl;
	}

}
