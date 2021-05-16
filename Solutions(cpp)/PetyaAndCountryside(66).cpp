#include<bits/stdc++.h>
using namespace std;

int N, a[1005];

void Load ()
{
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> a[i];
}

void Solve ()
{
	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		int cur = 1;
		for (int j = i - 1; j >= 0 && a[j] <= a[j + 1]; j--) cur++;
		for (int j = i + 1; j < N && a[j] <= a[j - 1]; j++) cur++;
		ans = max (ans, cur);
	}
	cout << ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Load();
	Solve();

}
