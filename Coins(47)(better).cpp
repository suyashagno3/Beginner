#include <bits/stdc++.h>
using namespace std;
char l[3], res[3];
int v[3], i;
int main() {
	for (i = 0; i < 3; i++) {
		cin >> l;
		if (l[1] == '>') v[l[0] - 'A']++;
		else v[l[2] - 'A']++;
	}
	if (v[0] && v[1] && v[2]) printf("Impossible");
	else {
		for (i = 0; i < 3; i++) res[v[i]] = 'A' + i;
		cout << res[0] << res[1] << res[2];
	}
}