#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,s,m;cin >> n >> s >> m;
	int k=s-s/7;
	int anw=s*m;
	if(anw%n==0) anw/=n;
	else anw=anw/n+1;
	if(anw>k) cout << -1 << endl;
	else cout << anw << endl; 
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
