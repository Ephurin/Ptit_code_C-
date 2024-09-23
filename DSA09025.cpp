#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
void dfs(int u){
	visited[u]=true;
	for(int i=0;i<adj[u].size();i++){
		if(!visited[adj[u][i]]){
			parent[adj[u][i]]=u;
			dfs(adj[u][i]);
		}
	}
}
void path(int s,int t){
	memset(visited,false,sizeof(visited));
	memset(parent,0,sizeof(parent));
	dfs(s);
	if(!visited[t]){
		cout << -1 << endl;
	}
	else{
		vector<int> v;
		while(t!=s){
			v.push_back(t);
			t=parent[t];
		}
		v.push_back(s);
		reverse(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
void solve(){
	int m,n,s,t;cin >> n >> m >> s >> t;
	for(int i=0;i<=n;i++){
		adj[i].clear();
	}
	for(int i=0;i<m;i++){
		int x,y;cin >> x >> y;
		adj[x].push_back(y);
	}
	path(s,t);
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
