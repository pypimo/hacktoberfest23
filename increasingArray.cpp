// https://cses.fi/problemset/task/1094/

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
vector<ll> v;
 
int main( ) {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	ll n, inp, ans=0;
	cin >> n;
 
	while(cin >> inp) v.pb(inp);
	ll MAX = v[0];
	for (ll i=1; i<n; i++) {
		MAX = max(MAX, v[i]);
		ans += MAX-v[i];
	}
	cout << ans;
 
	return 0;
}
