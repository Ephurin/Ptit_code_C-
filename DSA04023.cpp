#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;cin >> n >> k;
	long long a[n];
	long long res=0;
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		res+=lower_bound(a+i+1,a+n,a[i]+k)-(a+i+1);
	}
	cout << res << endl;
} 
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
