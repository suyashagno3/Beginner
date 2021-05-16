#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef vector< set<int> > vec;

vec graph;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	graph = vec(n);
	for (auto i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		a--; b--;
		graph[a].insert(b);
		graph[b].insert(a);
	}

	int cnt = 0;

	while (true) {

		set<int> s;

		for (auto i = 0; i < n; i++) {
			if ((int) graph[i].size() == 1) s.insert(i);
		}

		if ((int) s.size() == 0) break;

		for (int element : s) {
			graph[ *graph[element].begin() ].erase(element);
			graph[element].clear();
		}

		cnt++;
	}

	cout << cnt;

}