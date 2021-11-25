#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int n;
	cin >> n;
	int f = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << f;
			f += 1;
			f %= 2;

		}
		cout << endl;
	}
}

int32_t main() {
	hamojha
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	/*int t;
	cin >> t;
	while (t--)
	*/	solve();

	return 0;

}

