#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
void solve(){
	int n,k;cin >> n >> k;
	if(k==1){
		cout << 1 << endl;
		return;
	}
	long long a[100001]={0};
	a[1]=1;
	for(int i=2;i<=k;i++){
		a[i]+=2*a[i-1];
		a[i]%=mod;
	}
	for(int i=k+1;i<=n;i++){
		for(int j=1;j<=k;j++){
			a[i]=(a[i]+a[i-j])%mod;
		}
	}
	cout << a[n] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
