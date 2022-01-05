#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		float a[n];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}

		double s=0;
		for (int j=1; j<n; j++){
			if (j=1) {
				s += (a[j]/2)-a[j-1];
			}
			if (j==n) {
				s+= (a[j-2]/2)-a[j-1];
			}
			else {
				s+= ((a[j-2]+a[j])/2)-a[j-1];
			}
		}
		double function = abs(s);
		cout << (int) function << "\n";
	}
	return 0;
}

