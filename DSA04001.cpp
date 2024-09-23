#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=1e9+7;
void solve(){
	ll n,k;cin >> n >> k;
	ll cnt=1;
	ll anw=n;
	while(k>1){
		if(k%2==1){
			cnt*=anw;
			cnt%=mod;
		} 
		k/=2;
		anw*=anw;
		anw%=mod;
	}
	anw*=cnt;anw%=mod;
	cout << anw << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

