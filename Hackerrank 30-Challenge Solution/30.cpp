#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int a, b;

	int op = -1;
	while (op != 0) {
		cout << "1-Addition" << endl;
		cout << "2-Subtraction" << endl;
		cout << "3-Multiplication" << endl;
		cout << "4-Division" << endl;
		cout << "0-Exit" << endl;
		cin >> op;
		cout << "Enter 2 numbers" << endl;
		cin >> a >> b;
		float res = 0;
		switch (op) {
		case 1:
			cout << a + b; break;
		case 2:
			cout << a - b; break;
		case 3:
			cout << a*b; break;
		case 4:
			cout << a * 1.0 / b; break;
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

