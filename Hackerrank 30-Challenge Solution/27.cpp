#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	string s;
	getline(cin, s);
	vector<char> speacial = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')'};

	int alpha = 0, num = 0, spe = 0, space = 0;
	for (int i = 0; i < s.size(); i++) {
		if ((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z') ) alpha++;
		else if (s[i] >= '0' and s[i] <= '9') num++;
		else if (s[i] == ' ') space++;
		else spe++;
	}
	cout << alpha << " " << num << " " << spe << " " << space << endl;
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

