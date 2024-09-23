#include<bits/stdc++.h>
using namespace std;
long long conv(string s){
	reverse(s.begin(),s.end());
	long long k=0,h=1;
	for(int i=0;i<s.length();i++){
		if(s[i]=='1') k+=h;
		h+=h;
	}
	return k;
}
void solve(){
	string a,b;
	cin >> a >> b;
	cout << conv(a)*conv(b) << endl;
}
int main(){
	int t;cin >> t;
	while(t--) solve();
	return 0;
}
