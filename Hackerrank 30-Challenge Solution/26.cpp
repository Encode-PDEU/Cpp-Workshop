#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' and s[i] <= 'z') {
			s[i] = s[i] - 'a' + 'A';
		}
	}
	cout << s << endl;
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

