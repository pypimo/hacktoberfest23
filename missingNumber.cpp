//https://cses.fi/problemset/task/1083/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int  main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, inp;
    cin >> n;
    vector <ll> v;
    while(cin >> inp){
        v.push_back(inp);
    }
    sort(v.begin(), v.end());
    //v.push_back(0);
    for (ll i=0; i<n; i++) {
        //cout << v[i] << " ";
        if (v[i]!=i+1) {
            cout << i+1 << '\n';
            break;
        }
    }
    return 0;
