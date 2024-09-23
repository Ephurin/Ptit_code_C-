#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int nt(int k,int i,int n,int a[]){
	sort(a+i+1,a+n);
	return upper_bound(a+i+1,a+n,k-1) - (a+i+1);
}
void solve(){
	int n;cin >> n;
	int ans=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		ans+=nt(a[i],i,n,a);
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
