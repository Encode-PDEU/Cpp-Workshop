#include<bits/stdc++.h>
using namespace std;
#define int long long
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

void solve() {
	char c;
	cin >> c;
	char vowel[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	int size = sizeof(vowel) / sizeof(char);
	int f = 0;
	for (int i = 0; i < size; i++) {
		if (vowel[i] == c) {
			cout << "Vowel" << endl;
			f = 1;
			break;
		}
	}
	if (f == 0) cout << "Consonant" << endl;
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

