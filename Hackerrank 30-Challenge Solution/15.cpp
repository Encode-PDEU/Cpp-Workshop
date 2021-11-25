#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	for (int i = 0; i < 26; i++) {
		cout << 'a' + i << " ";
	}
	cout << endl;
	for (int i = 0; i < 26; i++) {
		cout << 'A' + i << " ";
	}
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

