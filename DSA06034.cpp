#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	long long cnt=0;
	for(int i=0;i<n;i++){
		cnt+=upper_bound(a+i+1,a+n,k-a[i])-lower_bound(a+i+1,a+n,k-a[i]);
	}
	cout << cnt << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
