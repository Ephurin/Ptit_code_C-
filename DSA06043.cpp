#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(i!=0) a[i]+=a[i-1];
	}
	for(int i=1;i<n-1;i++){
		if(a[i-1]==a[n-1]-a[i]){
			cout << i+1 << endl;
			return;
		}
	}
	cout << -1 << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

