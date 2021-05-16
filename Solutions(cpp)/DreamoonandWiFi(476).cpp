#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int fact(int n) {
	if (n == 1 || n == 0)
		return 1;
	return (n * (fact(n - 1)) % MOD) % MOD;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s1, s2;
	cin >> s1 >> s2;
	double x = 0;
	int sum1 = 0, sum2 = 0, count = 0;
	for (auto i = 0; i < s1.size(); i++) {
		if (s1[i] == '+') {
			sum1++;
		}
	}
	for (auto i = 0; i < s2.size(); i++) {
		if (s2[i] == '+') {
			sum2++;
		}
		if (s2[i] == '?') {
			count++;
		}

	}
	int ss = (1 << count);

	if (sum2 > sum1) {
		cout << fixed << setprecision(12) << x ;
	}
	else {
		if (count < (sum1 - sum2))
		{
			cout << fixed << setprecision(12) << x;
		}
		else
		{
			int diff = sum1 - sum2;
			double ncr = (fact(count) / fact(count - diff)) / fact(diff);
			double prob = ncr / ss;
			cout << fixed << setprecision(12) << prob;
		}
	}
}