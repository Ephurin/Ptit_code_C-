#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;long long k;cin >> n >> k;
	long long a[n];
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		a[i]+=a[i-1];
	}
	if(a[n]==k){
	    cout << "YES" << endl;
		return;	
	}
	for(int i=1;i<=n;i++){
		if(binary_search(a+i,a+n+1,a[i-1]+k)){
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
