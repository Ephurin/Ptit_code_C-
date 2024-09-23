#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dao(ll n){
	ll s=0;
	while(n>0){
		s=s*10+n%10;
		n/=10;
	}
	return s;
}
ll mod=1e9+7;
ll poww(ll n,ll k){
	if(k==0) return 1;
	ll x=poww(n,k/2);
	if(k%2==0) return (x*x)%mod;
	return (n*((x*x)%mod))%mod; 
}
void solve(){
	ll n,k;cin >> n;
	k=dao(n);
	cout << poww(n,k) << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
