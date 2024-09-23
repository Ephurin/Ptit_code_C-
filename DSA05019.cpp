#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;cin >> n >> m;
	int a[n][m],maxs=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
			if(i>0&&j>0&&a[i][j]==1){
				if(a[i-1][j]==a[i][j-1]&&a[i-1][j]==a[i-1][j-1]) a[i][j]=a[i-1][j]+1;
				else{
					int tmp=min(a[i-1][j],min(a[i-1][j-1],a[i][j-1]));
					if(tmp>0) a[i][j]=tmp+1;
				}
			}
			maxs=max(maxs,a[i][j]);
		}
	}
	cout << maxs << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
