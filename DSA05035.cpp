#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long a[105][10];
void prep(){
	memset(a,0,sizeof(a));
	for(int i=1;i<105;i++){
		for(int j=0;j<=9;j++){
			if(i==1) a[i][j]=1;
			else if(j==0) a[i][j]=1;
			else a[i][j]=(a[i-1][j]+a[i][j-1])%mod;
		}
	}
}
void solve(){
	int n;cin >> n;
	cout << a[n+1][9] <<endl;
}
int main(){
	prep();
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
