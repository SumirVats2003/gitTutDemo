#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s, strRev;
		getline(cin, s);
		// print the reverse of the string
		for(int i=s.size()-1; i>=0; i--) {
			cout << s[i];
			strRev.push_back(s[i]);
		}
		cout<<"\n";
		cout<<strRev<<"\n";
	}
	return 0;
}
