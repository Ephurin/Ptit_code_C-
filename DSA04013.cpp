#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int l=n/2-1,r=n-1,ans=n;
	while(l>=0){
		if(a[l]*2<=a[r]){
			ans--;l--;r--;
		}
		else l--;
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
