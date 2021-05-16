#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long i, j, k;
	long long n, l, sum = 0, f;

	cin >> n >> f;
	long long a[n];

	for (i = 0; i < n; i++)
	{
		cin >> k >> l;

		sum += min(k, l);

		if (k >= l)
			a[i] = 0;

		else
		{
			a[i] = min(2 * k, l) - min(k, l);
		}
	}

	sort(a, a + n, greater<long long>());

	i = 0;
	while (f && i < n)
	{
		if (a[i] > 0)
		{
			sum += a[i];
			f--;
		}

		i++;
	}

	cout << sum;
}