#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<=n-k;i++){
		cout << *max_element(a+i,a+i+k) << " ";
	}
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--) solve();
	return 0;
}
