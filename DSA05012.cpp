#include<bits/stdc++.h>
using namespace std;
long long c[1001][1001];
long long mod=1e9+7;
void setc(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i) c[i][j]=1;
			else c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
		}
	}
}
void solve(){
	int n,k;cin >> n >> k;
	cout << c[n][k] << endl;
}
int main(){
	setc();
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}