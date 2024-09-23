#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=1e9+7;
void solve(){
	ll n;cin >> n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin >> a[i] ;
	}
	ll sum=0;
	sort(a,a+n);
	for(ll i=0;i<n;i++){
	    sum+=a[i]*i;
		sum%=mod;	
	}
	cout << sum << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
