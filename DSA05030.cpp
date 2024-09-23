#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;cin >> m >> n;
	if(m==0&&n==0){
		cout << 0 << endl;
		return;
	}
	if(m==0||n==0){
		cout << 1 << endl;
		return;
	}
	int a[m+1][n+1];
	for(int i=m;i>=0;i--){
		for(int j=n;j>=0;j--){
			if(i==m||j==n) a[i][j]=1;
			else if(i==0&&j==0){}
			else if(i==0) a[i][j]=a[i+1][j];
			else if(j==0) a[i][j]=a[i][j+1];
			else a[i][j]=a[i+1][j]+a[i][j+1]; 
		}
	}
	a[0][0]=0;
	for(int i=1;i<=m;i++) a[0][0]+=a[i][0];
	for(int i=1;i<=n;i++) a[0][0]+=a[0][i];
	cout << a[0][0] << endl; 
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
