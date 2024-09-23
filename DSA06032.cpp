#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	long long k;cin >> k;
	long long a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	long long ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ans += lower_bound(a+j+1,a+n,k-a[i]-a[j]) - (a+j+1);
		}
	}
	cout << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
