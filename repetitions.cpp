// https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int  main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string s;
	cin >> s;
 
	ll maxct=1, ct=1;
	for (ll i=1; i<s.size(); i++) {
		if (s[i]==s[i-1]) {
			ct++;
		} else {
			ct=1;
		}
		maxct = max(maxct, ct);
	}
	cout << maxct <<'\n';
 
 
	return 0;
}
