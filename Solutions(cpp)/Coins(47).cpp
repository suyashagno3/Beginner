#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<string, int> &a, const pair<string, int> &b)
{
	return (b.second > a.second);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<pair<string, int>> v;
	string s;
	int x = 0, y = 0, z = 0;
	v.push_back(make_pair("A", x));
	v.push_back(make_pair("B", y));
	v.push_back(make_pair("C", z));
	for (auto i = 0; i < 3; i++) {
		cin >> s;
		if (s[1] ==  '>' ) {
			if (s[0] == 'A') {
				v[0].second = v[0].second + 1;
			}
			if (s[0] == 'B') {
				v[1].second += 1;
			}
			if (s[0] == 'C')
				v[2].second += 1;
			if (s[2] == 'A') {
				v[0].second -= 1;
			}
			if (s[2] == 'B') {
				v[1].second -= 1;
			}
			if (s[2] == 'C') {
				v[2].second -= 1;
			}
		}
		if (s[1] == '<') {
			if (s[0] == 'A') {
				v[0].second -= 1;
			}
			if (s[0] == 'B') {
				v[1].second -= 1;
			}
			if (s[0] == 'C')
				v[2].second -= 1;
			if (s[2] == 'A') {
				v[0].second += 1;
			}
			if (s[2] == 'B') {
				v[1].second += 1;
			}
			if (s[2] == 'C') {
				v[2].second += 1;
			}
		}




	}
	sort(v.begin(), v.end(), sortbysec);
	if (v[0].second == 0 && v[1].second == 0 && v[2].second == 0)
	{
		cout << "Impossible";
	}
	else
	{
		for (auto i = 0; i < 3; i++) {
			cout << v[i].first;
		}
	}



}
