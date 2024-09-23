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
void solve(){
	int n,s;cin >> n >> s;
	for(int i=1;i<=n;i++){
		v[i].clear();
	}
	memset(visited,false,sizeof(visited));
	for(int i=0;i<s;i++){
		int a,b;cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			ans++;
			dfs(i);
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
