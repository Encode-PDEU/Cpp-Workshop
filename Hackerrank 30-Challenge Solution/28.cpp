#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

int even_range(int l, int r) {
	if (l == r + 1) return 0;
	int sum = 0;
	if (l % 2 == 0) sum += l;
	return sum + even_range(l + 1, r);
}
void solve() {
	int l, r;
	cin >> l >> r;
	cout << even_range(l, r) << endl;
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

