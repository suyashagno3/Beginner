#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, k, t, a, b, i, j, t0;
	cin >> n >> m >> k >> t;
	int w[k];
	for (int in = 0; in < k; in++)
	{
		cin >> a >> b;
		w[in] = ((a - 1) * m) + b - 1;
	}
	sort(w, w + k);

	for (int in = 0; in < t; in++)
	{
		int f = 0;
		int count = 0;
		cin >> i >> j;
		t0 = ((i - 1) * m) + j - 1;
		for (int z = 0; z < k; z++)
		{
			if (w[z] == t0)
			{
				cout << "Waste" << endl;
				f = 1;
				break;
			}

			else
			{
				if (t0 > w[z])
					count++;
			}

		}

		if ((t0 - count) % 3 == 0 && f == 0)
			cout << "Carrots" << endl;

		else if ((t0 - count) % 3 == 1 && f == 0)
			cout << "Kiwis" << endl;

		else if (f == 0) cout << "Grapes" << endl;






	}
}