#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int n;
	cin >> n;
	int f = 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			cout << "No" << endl;
			f = 1;
			break;
		}
	}
	if (f == 0) cout << "Yes" << endl;
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

