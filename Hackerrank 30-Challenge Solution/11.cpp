#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	while (n > 0) {
		int r = n % 10;
		v.push_back(r);
		n /= 10;
	}
	swap(v[0], v[v.size() - 1]);
	reverse(v.begin(), v.end());
	int ans = 0;
	for (auto i : v) ans = ans * 10 + i;
	cout << ans << endl;
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

