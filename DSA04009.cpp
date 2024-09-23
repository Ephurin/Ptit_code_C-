#include<bits/stdc++.h>
using namespace std;
long long a[15][15],b[15][15];
long long mod=1e9+7;
int n,k;
void multi(long long a[15][15],long long b[15][15]){
	long long c[15][15]={};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				c[i][j]+=a[i][k]*b[k][j];
				c[i][j]%=mod;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=c[i][j];
		}
	}
}
void power(long long a[15][15],int k){
	if(k==1) return;
	power(a,k/2);
	multi(a,a);
	if(k%2==1) multi(a,b);
}
void solve(){
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];b[i][j]=a[i][j];
		}
	}
	power(a,k);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
