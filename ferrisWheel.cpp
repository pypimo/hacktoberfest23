// https://cses.fi/problemset/task/1090/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	ll n, x;
	cin >> n >> x;
	vector<ll> a(n);
	for (ll i=0; i<n; i++) cin >> a[i];
 
	sort(a.begin(), a.end());
	ll i=-1, ans=0; 
	for (ll j=n-1; j>i; j--) {
		if (a[i+1]+a[j]<=x) {
			ans++;
			i++;
		} else if (a[j]<=x) ans++;
	}
	cout << ans;
 
	return 0;
}
