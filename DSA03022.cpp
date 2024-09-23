#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int l=max(a[0]*a[1],a[0]*a[1]*a[n-1]);
	int r=max(a[n-1]*a[n-2],a[n-1]*a[n-2]*a[n-3]);
	cout << max(l,r);
}
int main(){
	solve();
	return 0;
}
