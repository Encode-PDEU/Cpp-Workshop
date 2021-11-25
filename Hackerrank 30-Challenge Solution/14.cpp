#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int n;
	cin >> n;
	int dp[n] = {0};
	if (n == 1) {cout << "1" << endl; return;}
	if (n == 2) {cout << "1 1" << endl; return;}
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i < n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	for (int i = 0; i < n; i++) cout << dp[i] << " ";
	cout << endl;
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

