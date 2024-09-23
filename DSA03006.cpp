#include<bits/stdc++.h>
using namespace std;
bool ok(int a[],int n){
	for(int i=1;i<=n;i++){
		if(a[i]!=i&&a[i]!=n-i+1){
			return 0;
		}
	}
	return 1;
}
void solve(){
	int n;cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if(ok(a,n)) cout << "Yes" << endl;
	else cout << "No" << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
