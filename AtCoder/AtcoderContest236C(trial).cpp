#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	string s[n];
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	int it=0;
	for(int i=0;i<m;i++){
		string ss;
		cin >> ss;
		while(s[it++]!=ss){
			cout << "No" << endl;
		}
		cout << "Yes" << endl;
	}
}
