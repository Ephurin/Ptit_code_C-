#include<bits/stdc++.h>
using namespace std;
void solve(){
	int m,n;cin >> n >> m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<m;i++) cin >> b[i];
	sort(a,a+n);sort(b,b+n);
	cout << (long long)a[n-1]*(long long)b[0] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

