#include<bits/stdc++.h>
using namespace std;
void solve(){
	string a,b;cin >> a >> b;
	int m=a.length(),n=b.length();
	int f[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0) f[i][j]=j;
			else if(j==0) f[i][j]=i;
			else if(a[i-1]==b[j-1]){
				f[i][j]=f[i-1][j-1];
			}
			else f[i][j]=min(f[i][j-1],min(f[i-1][j],f[i-1][j-1]))+1;
		}
	}
	cout << f[m][n] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
