#include<bits/stdc++.h>
using namespace std;
int f[1500][55];
int a[1500];
int inf=1e9+7;
void solve(){
	int n,k;cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> a[i];a[i]%=k;
	}
	for(int i=1;i<k;i++) f[1][i] = -inf;
	f[1][a[1]]=1;
	for(int i=2;i<=n;i++){
		for(int j=0;j<k;j++){
			f[i][j]=max(f[i-1][j],f[i-1][(j-a[i]+k)%k]+1);
		}
	}
	cout << f[n][0] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
