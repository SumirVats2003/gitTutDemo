#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		string s2 = "code";
		string s3 = "chef";
		int index_str;
		int position = 0;
		int code;
		while(( index_str = s.find(s2, position)) != string::npos){
			code = index_str;
			position = index_str + 1;
    	}

		int index_str1;
		int chef;
		position = 0;
		while(( index_str1 = s.find(s3, position)) != string::npos){
			chef = index_str1;
			position = index_str1 + 1;
		}

		if (code < chef){
			cout << "AC\n";
		}
		else {
			cout << "WA\n";
		}
	}
	return 0;
}

