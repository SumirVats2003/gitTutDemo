#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * Array size limits
 * in a function body => 1e5
 * in the global scope => 1e7
 * but in global scope the argument should be const variable
 */

// const int n = 1e7;
// int m[n];

int main() {
	int n, m;
	cin >> n >> m;

	// 2D Arrays
	int a[n][m]; // make three copies of a[4] - to understand
	// a[rows][columns]
	/*
	 * 1 2 3
	 * 4 5 6
	 * 7 8 9
	 * 1 2 3
	 */
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}


	return 0;
}

