#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int a[100000 + 1], b[100000 + 1];
	long long int n, m;
	cin >> n;
	long long int temp;
	for (int i = 1; i <= n; i++)
	{
		cin >> temp;
		a[temp] = i;
		b[temp] = n + 1 - i;
	}
	long long int vasya = 0, petya = 0;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		vasya += a[temp];
		petya += b[temp];
	}
	cout << vasya << " " << petya;


}
