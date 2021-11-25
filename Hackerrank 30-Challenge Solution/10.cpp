#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	char c;
	cin >> c;

	if (c >= 'a' and c <= 'z') cout << "lowerCase" << endl;
	else if (c >= 'A' and c <= 'Z') cout << "upperCase" << endl;

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

