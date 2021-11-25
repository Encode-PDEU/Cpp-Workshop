#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b and b == c) cout << "Equilateral" << endl;
	else if (a == b or b == c or c == a) cout << "Isosceles" << endl;
	else cout << "Scalene" << endl;
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

