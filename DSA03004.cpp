#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
void solve(){
	ll n;cin >> n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	ll sum=0;
	for(int i=n-1;i>=0;i--){
		sum+=a[i]*pow(10,i/2);
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
