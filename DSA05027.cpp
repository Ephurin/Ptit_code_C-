#include<bits/stdc++.h> 
using namespace std;
void solve(){
	int n,v;cin >> n >> v;
	int a[n+1],c[n+1],dp[n+1][v+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++) cin >> c[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=v;j++){
			dp[i][j]=dp[i-1][j];
			if(j>=a[i]) dp[i][j]=max(dp[i][j],dp[i-1][j-a[i]]+c[i]);
		}
	}
	cout << dp[n][v] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}