#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
	if(b==0)
		return a;
	return gcd(b, a%b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		ll x, y;
		cin >> x >> y;
		cout << 2*gcd(x, y) << "\n";
	}
}
