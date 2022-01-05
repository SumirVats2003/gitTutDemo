#include<bits/stdc++.h>
#define ll long long
using namespace std;

int numDiv(int m) {
	int numdiv=0;
	for(int i=0; i<sqrt(m); i++) {
		if (m%i==0) {
			numdiv++;
		}
	}
	return numdiv;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		int numdiv = 0;
		int prevdiv;
		int k;
		for (int i=2; i<sqrt(n); i++) {
			if (n%i == 0) {
				numDiv(n/i);
			}
			prevdiv = numDiv((n)/(i-1));
			if (numdiv>prevdiv) {
				k = i;
				prevdiv=numdiv;
			}
		}
		cout << k << "\n";
	}
	return 0;
}

