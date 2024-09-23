#include<bits/stdc++.h>
using namespace std;
vector<int> G[1001];
bool visited[1001]; 
void dfs(int u){
	visited[u]=true;
	for(int i=0;i<G[u].size();i++){
		if(!visited[G[u][i]]) dfs(G[u][i]);
	}
}
void solve(){
	int n,k;cin >> n >> k;
	for(int i=1;i<=n;i++){
		G[i].clear();
	}
	for(int i=0;i<k;i++){
		int a,b;cin >> a >> b;
		G[a].push_back(b);
	}
	for(int i=1;i<=n;i++){
		memset(visited,false,sizeof(visited));
		dfs(i);
		for(int u=1;u<=n;u++){
			if(!visited[u]){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
