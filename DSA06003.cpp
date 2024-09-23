#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		int tmp=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[tmp]) tmp=j;
		}
		if(tmp!=i){
			swap(a[tmp],a[i]);
			ans++;
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

