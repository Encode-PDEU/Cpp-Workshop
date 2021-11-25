#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int n;
	cin >> n;
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {cout << " ";}
		for (int j = 0; j < n - i - 1; j++) {
			cout << "*";
		}
		for (int j = 0; j < n - i ; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {cout << " ";}
		for (int j = 0; j < n - i - 1; j++) {
			cout << "*";
		}
		for (int j = 0; j < n - i ; j++) {
			cout << "*";
		}
		cout << endl;
	}
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

