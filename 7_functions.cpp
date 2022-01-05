#include<bits/stdc++.h>
#define ll long long
using namespace std;

// passing arrays to functions
const int N = 1e3 + 10;
int a[N][N];
void func() {
	a[0][0] = 5;
}


void swap(int &n, int &m) {
	int temp;
	temp = n;
	n=m;
	m=temp;
}

int main() {
	// Refrences in C++
	// int n, m;
	// cin >> n >> m;
	// cout << n << " " << m << endl;
	// swap(n,m);
	// cout << n << " " << m << endl;
	a[0][0] = 12;
	cout << a[0][0] << "\n";
	func();
	cout << a[0][0];
	return 0;
}

