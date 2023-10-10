// https://cses.fi/problemset/task/1070/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
vector<ll> v;
 
int main( ) {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	ll n,even=0;
	cin >> n;
 
	for (ll i=2; i<=n; i+=2) {
		v.pb(i);
		even++;
	}
	for (ll i=1; i<=n; i+=2) {
		v.pb(i);
	}
 
	if (even==1) cout << "NO SOLUTION";
	else {
		for (ll i=0; i<v.size(); i++) cout << v[i] << " ";
	}
 
	return 0;
}
