#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=123456789;
ll poww(ll n,ll k){
	if(k==0) return 1;
	ll x=poww(n,k/2);
	if(k%2==0) return (x*x)%mod;
	return (n*((x*x)%mod))%mod; 
}
void solve(){
	ll n;cin >> n;
	cout << poww(2,n-1) << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
