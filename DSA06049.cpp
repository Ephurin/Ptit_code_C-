#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	long long cnt=0;
	for(int i=0;i<n;i++){
		int tmp=lower_bound(a,a+n,a[i]+k)-(a+i+1);
		cnt+=tmp;
	}
	cout << cnt << endl;
} 
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
