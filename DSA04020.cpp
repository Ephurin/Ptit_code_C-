#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int l=0,r=n-1,anw=-1;
	while(l<r){
		int mid=(l+r)/2;
		if(a[mid]==k){
			anw=mid;
			break;
		} 
		else if(a[mid]>k) r=mid;
		else l=mid+1;
	}
	if(anw==-1) cout << "NO" << endl;
	else cout << anw+1 << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
