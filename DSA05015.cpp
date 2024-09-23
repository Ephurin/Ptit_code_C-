#include<bits/stdc++.h>
using namespace std;
long long a[1005][1005];
int n,k;
long long mod=1e9+7;
void prep(){
	for(int i=1;i<=1001;i++){
		for(int j=1;j<=1001;j++){
			if(j>i) a[i][j]=0;
			else if(j==1) a[i][j]=i;
			else a[i][j]=(a[i][j-1]*(i-j+1))%mod;
		}
	}
}
void solve(){
	int n,k;cin >> n >> k;
	cout << a[n][k] << endl;
}
int main(){
	prep();
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
