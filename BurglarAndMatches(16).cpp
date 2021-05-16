#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
	return (a.second > b.second);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, match = 0, left, x, y;
	vector<pair<int, int>> v;
	cin >> n >> m;
	left = n;
	for (auto i = 0; i < m; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), sortbysec);
	for (auto i = 0; i < m; i++) {
		if (left == 0) {
			break;
		}
		if (v[i].first < left) {
			left = left - v[i].first;
			match = match + (v[i].first) * (v[i].second);
		}
		else
		{
			match = match + left * (v[i].second);
			left = 0;
		}

	}
	cout << match;

}
