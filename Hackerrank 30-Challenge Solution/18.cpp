#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	int n;
	cin >> n;
	float rate = 0;
	if (n <= 50)
	{
		rate = n * 0.50;
	}
	else if (n <= 150)
	{
		rate = 25 + ((n - 50) * 0.75);
	}
	else if (n <= 250)
	{
		rate = 100 + ((n - 150) * 1.20);
	}
	else
	{
		rate = 220 + ((n - 250) * 1.50);
	}
	float surplus = rate * 0.2;
	cout << surplus << endl;
	cout << rate << endl;
	cout << fixed << setprecision(2)  << surplus + rate << endl;
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

