#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool visited[1001];
void dfs(int u){
	visited[u]=true;
	for(int i=0;i<v[u].size();i++){
		if(!visited[v[u][i]]) dfs(v[u][i]);
	}
}
void path(int s,int t){
	memset(visited,false,sizeof(visited));
	dfs(s);
	if(visited[t]) cout << "YES" << endl;
	else cout << "NO" << endl;
}
void solve(){
	int n,s;cin >> n >> s;
	for(int i=1;i<=n;i++){
		v[i].clear();
	}
	for(int i=0;i<s;i++){
		int a,b;cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int q;cin >> q;
	while(q--){
		int x,y;cin >> x >> y;
		path(x,y);
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
