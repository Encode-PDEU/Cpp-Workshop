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
	int i = 0, j = v.size() - 1;
	int f = 0;
	while (i < j) {
		if (v[i++] != v[j--]) {
			cout << "No" << endl;
			f = 1;
			break;
		}
	}
	if (f == 0)cout << "Yes" << endl;
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

