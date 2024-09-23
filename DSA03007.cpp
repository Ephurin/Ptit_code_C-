#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(ll a,ll b){
	return a>b;
} 
void solve(){
	int n;cin >> n;
	ll a[n],b[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+n,cmp);
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i]*b[i];
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
