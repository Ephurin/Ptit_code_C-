#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k,sum=0;cin >> n >> k;
	if(n-k<k){
		k=n-k;
	}
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0;i<k;i++){
		sum-=a[i];
	}
	for(int i=k;i<n;i++){
		sum+=a[i];
	}
	cout << sum << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
