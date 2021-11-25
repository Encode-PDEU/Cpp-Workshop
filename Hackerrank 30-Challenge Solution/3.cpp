#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	if (n % 2 == 0) v.push_back(2), n /= 2;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) {v.push_back(i);  n /= i;}
	}
	if (n > 2) v.push_back(n);
	for (auto i : v) cout << i << " ";
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

