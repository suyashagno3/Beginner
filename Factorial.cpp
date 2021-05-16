#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int num;
	cin >> num;
	cout << factorial(num);

}