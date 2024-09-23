#include<bits/stdc++.h>
using namespace std;
void solve(){
	int m,n,k;cin >> m >> n >> k;
	int a[m+n];
	for(int i=0;i<n+m;i++){
		cin >> a[i];
	}
	sort(a,a+m+n);
	cout << a[k-1] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
