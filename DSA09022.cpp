#include<bits/stdc++.h>
using namespace std;
void dfs(int u,int n,bool visited[],int a[][1001]){
	cout << u << " ";
	visited[u]=true;
	for(int i=1;i<=n;i++){
		if(!visited[i]&&a[u][i]) dfs(i,n,visited,a);
	}
}
void solve(){
	int n,s,u;cin >> n >> s >> u;
	int a[n+1][1001];
	bool f[n+1];
	memset(a,0,sizeof(a));
	memset(f,false,sizeof(f));
	while(s--){
		int i,j;cin >> i >> j;
		a[i][j]=1;
	}
	dfs(u,n,f,a);
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
