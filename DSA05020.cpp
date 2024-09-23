#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;cin >> n >> m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
			if(i==0&&j!=0) a[i][j]+=a[i][j-1];
			if(i!=0&&j==0) a[i][j]+=a[i-1][j];
		}
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			a[i][j]+=min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]));
		}
	}
	cout << a[n-1][m-1] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
