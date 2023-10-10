// https://cses.fi/problemset/task/1754/

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
vector<ll> v;
 
int main( ) {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	ll t;
	cin >> t;
	
	while (t--) {
		ll a, b;
		cin >> a >> b;
		string s = ((a+b)%3 || max(a,b)>2*min(a,b)) ? "NO\n" : "YES\n";
		cout << s;
	}
 
	return 0;
}
