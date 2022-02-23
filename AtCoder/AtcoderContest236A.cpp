#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int a,b;
    cin>>s;
    cin>>a>>b;
    swap(s[a-1],s[b-1]);
    cout<<s;
}
