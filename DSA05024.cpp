#include<bits/stdc++.h>// test giay lai bai nay !!!!!!!
using namespace std;
int mod=1e9+7;
void solve(){
	int n,k;cin >> n >> k;
	int a[n],f[k+1]={0};
	f[0]=1;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=k;i++){
		for(int j=0;j<n;j++){
			if(i>=a[j]){
				f[i]+=f[i-a[j]];
				f[i]%=mod;
			}
		}
	}
	cout << f[k] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
