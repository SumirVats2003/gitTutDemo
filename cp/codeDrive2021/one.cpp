#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a,b,c,d;
		cin >> a>>b>>c>>d;
		int nCoins = a;
		int sCoins = b;
		if (a>=b) {
			sCoins += c;
		}
		else {
			nCoins += c;
		}
		if (nCoins >= sCoins) {
			sCoins += d;

		}
		else {
			nCoins += d;
		}
		if (sCoins > nCoins) {
			cout << "S\n";
		}
		else {
			cout << "N\n";
		}
	}
	return 0;
}

