#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int n;
	cin >> n;
	int temp = n;
	int sum = 0;
	while (temp > 0) {
		int r = temp % 10;
		sum += r * r * r;
		temp /= 10;
	}
	if (sum == n) cout << "Yes" << endl;
	else cout << "No" << endl;
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

