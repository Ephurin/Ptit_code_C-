#include<bits/stdc++.h>
using namespace std;
int a[505][505];
static int x[]={-1,-1,-1,0,0,1,1,1};
static int y[]={-1,0,1,-1,1,-1,0,1};
bool visited[505][505];
void dfs(int i,int j,int m,int n){
	visited[i][j]=true;
	for(int k=0;k<8;k++){
		if(!visited[i+x[k]][j+y[k]]&&a[i+x[k]][j+y[k]]==1&&i+x[k]>=1&&i+x[k]<=m&&j+y[k]>=1&&j+y[k]<=n){
		    dfs(i+x[k],j+y[k],m,n);	
		}
	}
}
void solve(){
	int m,n;cin >> m >> n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	memset(visited,false,sizeof(visited));
	int ans=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(!visited[i][j]&&a[i][j]==1){
				ans++;
				dfs(i,j,m,n);
			}
		}
	}
	cout << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
